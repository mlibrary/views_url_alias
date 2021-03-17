<?php

/**
 * @file
 * Provide views data and handler information for Views URL alias (node) module.
 */

/**
 * Implements hook_views_data().
 */
function views_url_alias_node_views_data() {
  // Define table group
  $data['views_url_alias_node']['table']['group'] = t('Content');
  $data['views_url_alias_node']['table']['provider'] = 'views_url_alias_node';

  $data['views_url_alias_node']['table']['base'] = [
    'field' => 'nid',
    'title' => t('URL alias'),
    'help' => t('Mapping table contains node IDs and their associated path aliases.'),
    'weight' => -10,
  ];

  $data['views_url_alias_node']['table']['join'] = [
    'node_field_data' => [
      'left_field' => 'nid',
      'field' => 'nid',
    ],
  ];

  $data['views_url_alias_node']['alias'] = [
    'title' => t('URL alias'),
    'help' => t('The alias for a node.'),
    'field' => [
      'id' => 'standard',
      'click sortable' => TRUE,
    ],
    'sort' => [
      'id' => 'string',
    ],
    'filter' => [
      'id' => 'string',
    ],
  ];

  return $data;
}
