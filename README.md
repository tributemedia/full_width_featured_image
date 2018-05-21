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
3. To enable slider option, you'll just need to make the image upload field a multiple value field.
  * Go to _Structure > Content types_
  * Click "Manage Fields" tab for the Basic page content type.
  * Edit the image field
  * Set the "Number of values" field to unlimited (or the number of slides you want to allow).
  * If more than one image is uploaded on a page, they will rotate on the page.
  
