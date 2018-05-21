<?php
/**
 * @file
 * full_width_featured_image.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function full_width_featured_image_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-page_slider-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'page_slider-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'page',
    ),
    'options' => 'a:0:{}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'material_custom' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'material_custom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
