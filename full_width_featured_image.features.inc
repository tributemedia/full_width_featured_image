<?php
/**
 * @file
 * full_width_featured_image.features.inc
 */

/**
 * Implements hook_views_api().
 */
function full_width_featured_image_views_api($module = NULL, $api = NULL) {
  return array(
    'api' => '3.0',
    'path' => drupal_get_path('module', 'full_width_featured_image'),
    'template path' => drupal_get_path('module', 'full_width_featured_image') . '/templates',
  );
}
