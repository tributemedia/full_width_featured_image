# Full Width Featured Image
Provides block display to include the node featured image displayed at full width, in the preface, with a slider option.

## Installation

1. Upload feature to /sites/all/modules/features/
2. Enable feature
   * Go to _Structure > Features_
   * Enable feature
   * If the feature "State" is overridden, you will need to revert it.
     * Click the "Overridden" link
     * Check any empty checkboxes, and click "Revert Components."

## To enable slider option, you'll just need to make the image upload field a multiple value field.

1. Go to _Structure > Content types_
2. Click "Manage Fields" tab for the Basic page content type.
3. Edit the image field
4. Set the "Number of values" field to unlimited (or the number of slides you want to allow).
5. If more than one image is uploaded on a page, they will rotate on the page.

## To enable the feature on additional content types, you'll need to add the existing image field to the content type you want to include, and configure the block to display on the corresponding content types.

1. Go to _Structure > Content types_, and click the "manage fields" link for the content type you want to add the feature to.
2. If the "field_image" is already added, then skip to step 12.
3. If the "field_image" is not added, scroll to the **Add existing field** section, and choose the "Image: field_image (Image)" option.
4. _Help text_: Adding an image here will automatically be formatted on your page. Leave this image empty and add directly in content area if you'd like to move this image manually.
5. _Allowed file extensions_: png, gif, jpg, jpeg
6. _File directory_: image-uploads
7. _Maximum image resolution_: 1280 x 800
8. Enable Alt and Title fields.
9. To enable the slider option, _Number of values_ should be set to "unlimited" or the specific number of images you want to allow.
10. All other fields should be left to the default values.
11. Save
12. Go to _Structure > Blocks_
13. Find the _View: Page Slider_ block and click the configure link.
14. Under the _Visibility settings_ click the _Content Types_ tab and select the content type you want to add the feature to.
15. Save block
