// Name: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// Address: 005b4823
// MANUAL RECONSTRUCTION
// Address Range: [[005b4823, 005b507e] [005b5085, 005b50eb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

{
  SSoftwareEdge *lo;
  SSoftwareEdge *hi;
  int left_x;
  int right_x;
  int pixel_count;
  int recip;
  int start_w;
  int delta_w;
  int start_u;
  int delta_u;
  int start_v;
  int delta_v;
  int start_alpha;
  int delta_alpha;
  ulonglong color_current;      // replaces MM5: 4 packed ushorts [blue, green, red, alpha]
  ulonglong color_delta;        // replaces MM6: same layout
  uint red_s, green_s, blue_s;
  uint red_d, green_d, blue_d;
  uint hi_val, lo_val;
  uint light_idx;
  ushort *screen_ptr;
  int *zbuf_ptr;
  int i;

  // Sort left/right by x_current so `lo` has the smaller pixel-x.
  if ((left_vertex->base).x_current <= (right_vertex->base).x_current) {
    lo = left_vertex;
    hi = right_vertex;
  }
  else {
    lo = right_vertex;
    hi = left_vertex;
  }
  left_x  = (int)((uint)(lo->base).x_current >> 16);
  right_x = (int)((uint)(hi->base).x_current >> 16);
  pixel_count = right_x - left_x;
  if (pixel_count <= 0) {
    return;
  }

  screen_ptr = (ushort *)g_ScreenBufferArray[scanline_y] + left_x;
  zbuf_ptr   = (int *)g_ZBufferScanlineArray[scanline_y] + left_x;
  g_ScanlinePixelCount = pixel_count * 4;
  g_CurrentScreenPtr   = (int *)screen_ptr;
  g_CurrentZBufferPtr  = zbuf_ptr;

  // Z-only fill path — LAB_005b50a9 in the asm.
  if (g_RenderStateFlags.dword == RENDER_DEPTH_WRITE) {
    start_w = (lo->base).w_current;
    delta_w = (int)(((longlong)((hi->base).w_current - start_w)
                     * (longlong)(int)g_ReciprocalLookupTable[pixel_count + 1]) >> 32);
    g_StartDepthW = start_w;
    g_DeltaDepthW = delta_w;
    for (i = 0; i < pixel_count; i++) {
      zbuf_ptr[i] = start_w;
      start_w += delta_w;
    }
    return;
  }

  recip = (int)g_ReciprocalLookupTable[pixel_count + 1];

  // Texture U/V setup — perspective-corrected vs linear.
  // Perspective: start = (u_current << 24) / w_current per vertex, then delta
  // is the inter-pixel step of that quotient scaled by recip[pixel_count].
  if (g_VertexPreprocessMode == PREPROCESS_PERSPECTIVE_TEXTURE) {
    start_u = (int)(((longlong)(lo->base).u_current << 24) / (longlong)(lo->base).w_current);
    delta_u = (int)(((longlong)(
                      (int)(((longlong)(hi->base).u_current << 24) / (longlong)(hi->base).w_current)
                      - start_u)
                     * (longlong)recip) >> 32);
    start_v = (int)(((longlong)(lo->base).v_current << 24) / (longlong)(lo->base).w_current);
    delta_v = (int)(((longlong)(
                      (int)(((longlong)(hi->base).v_current << 24) / (longlong)(hi->base).w_current)
                      - start_v)
                     * (longlong)recip) >> 32);
  }
  else {
    start_u = (lo->base).u_current;
    delta_u = (int)(((longlong)((hi->base).u_current - start_u) * (longlong)recip) >> 32);
    start_v = (lo->base).v_current;
    delta_v = (int)(((longlong)((hi->base).v_current - start_v) * (longlong)recip) >> 32);
  }
  g_StartTextureU = start_u;
  g_DeltaTextureU = delta_u;
  g_StartTextureV = start_v;
  g_DeltaTextureV = delta_v;

  // Depth (W).
  start_w = (lo->base).w_current;
  delta_w = (int)(((longlong)((hi->base).w_current - start_w) * (longlong)recip) >> 32);
  g_StartDepthW = start_w;
  g_DeltaDepthW = delta_w;

  // Vertex alpha tracks fog_current.
  start_alpha = (lo->base).fog_current;
  delta_alpha = (int)(((longlong)((hi->base).fog_current - start_alpha) * (longlong)recip) >> 32);
  g_VertexAlphaStart = start_alpha;
  g_VertexAlphaDelta = delta_alpha;

  // Color accumulator (MM5/MM6 in asm) — 4-way branch on render flags.
  // MM5 packs [blue:16][green:16][red:16][alpha:16] low→high.
  if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0) {
    // Per-vertex RGB interpolation (LAB_005b49a4).
    // Red from z_current, green from color_current, blue from alpha_current — all >> 1.
    red_s   = ((uint)(lo->base).z_current >> 1) & 0xffff;
    red_d   = (uint)(int)(((longlong)(int)(((uint)(hi->base).z_current >> 1)
                                           - ((uint)(lo->base).z_current >> 1))
                           * (longlong)recip) >> 32) & 0xffff;
    green_s = ((uint)lo->color_current >> 1) & 0xffff;
    green_d = (uint)(int)(((longlong)(int)(((uint)hi->color_current >> 1)
                                           - ((uint)lo->color_current >> 1))
                           * (longlong)recip) >> 32) & 0xffff;
    blue_s  = ((uint)lo->alpha_current >> 1) & 0xffff;
    blue_d  = (uint)(int)(((longlong)(int)(((uint)hi->alpha_current >> 1)
                                           - ((uint)lo->alpha_current >> 1))
                           * (longlong)recip) >> 32) & 0xffff;
    g_VertexRedStart   = red_s;   g_VertexRedDelta   = red_d;
    g_VertexGreenStart = green_s; g_VertexGreenDelta = green_d;
    g_VertexBlueStart  = blue_s;  g_VertexBlueDelta  = blue_d;
    color_current = ((ulonglong)red_s   << 32) | ((ulonglong)green_s << 16) | blue_s;
    color_delta   = ((ulonglong)red_d   << 32) | ((ulonglong)green_d << 16) | blue_d;
  }
  else if ((g_RenderStateFlags.dword & RENDER_FOG_COLOR) != 0) {
    // Fog-derived color (LAB_005b4a61). Unsigned clamp of (z - 0x100) to 0xfff, then * 8.
    // Broadcast single channel to all 3 RGB slots.
    hi_val = (uint)(hi->base).z_current - 0x100;
    lo_val = (uint)(lo->base).z_current - 0x100;
    if (0xfff < hi_val) hi_val = 0xfff;
    if (0xfff < lo_val) lo_val = 0xfff;
    hi_val <<= 3;
    lo_val <<= 3;
    red_s = lo_val & 0xffff;
    red_d = (uint)(int)(((longlong)(int)(hi_val - lo_val) * (longlong)recip) >> 32) & 0xffff;
    g_VertexRedStart = red_s;
    g_VertexRedDelta = red_d;
    color_current = ((ulonglong)red_s << 32) | ((ulonglong)red_s << 16) | red_s;
    color_delta   = ((ulonglong)red_d << 32) | ((ulonglong)red_d << 16) | red_d;
  }
  else if ((g_RenderStateFlags.dword & RENDER_LIGHTING_COLOR) != 0) {
    // Lighting-value-derived color (LAB_005b4aed).
    // idx = clamp((g_CurrentLightingValue - 0x100) >> 4, 0, 0xff); unsigned so underflow clamps high.
    light_idx = ((uint)g_CurrentLightingValue - 0x100) >> 4;
    if (0xff < light_idx) light_idx = 0xff;
    color_current = *(ulonglong *)&g_AlphaTable[light_idx];
    // psllw MM5, 7 — per-word shift left by 7.
    color_current = ((color_current & 0x01ff01ff01ff01ffULL) << 7);
    color_delta = 0;
  }
  else {
    // Default full-bright (fall-through after LAB_005b4aed guard).
    color_current = *(ulonglong *)&g_AlphaTable[0xff];
    color_current = ((color_current & 0x01ff01ff01ff01ffULL) << 7);
    color_delta = 0;
  }

  // Main loop state (ECX, EDX, ESI, EBP, EDI in the asm).
  int cur_u     = g_StartTextureU;
  int cur_v     = g_StartTextureV;
  int cur_w     = g_StartDepthW;
  int cur_alpha = g_VertexAlphaStart;
  int edi       = 0;   // pixel cursor, strides by 4 per pixel
  ulonglong clear_bits = __BITCAST_UINT64(g_SelectedClearColor);

  // Render-path dispatch (LAB_005b4b17 fall-through).
  if (g_CurrentTextureOpacityData == (void *)0x0 && (g_RenderStateFlags.dword & RENDER_FORCE_SOLID_LOOP) == 0) {
    // Loop C — untextured solid-color path (LAB_005b4f11).
    uint solid_raw = (uint)g_SolidColorMode;
    if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) == 0) {
      cur_alpha = 0;
      g_VertexAlphaDelta = 0;
    }
    while (1) {
      // Z-test
      if ((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0 || cur_w >= ((int *)g_CurrentZBufferPtr)[edi / 4]) {
        uint pix;
        // Get base color (LAB_005b4f52 / LAB_005b5085)
        if ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) != 0) {
          uint tex_idx = ((uint)cur_u >> g_TextureShift1.mm) & g_TextureMask1.u32[0];
          tex_idx += ((uint)cur_v >> g_TextureShift2.mm) & g_TextureMask2.u32[0];
          pix = g_Hardware32BitPalette[*((byte *)g_CurrentTextureData + tex_idx)];
        }
        else if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0) {
          pix = (uint)g_SpecialColor;
        }
        else {
          pix = (uint)g_ActiveRenderColor;
        }

        // Lighting modulation (LAB_005b4f9b): per-channel
        // lit_byte = saturate_to_byte(((pix_byte << 4) * (color_word >> 3)) >> 16)
        uint lit_pix = 0;
        int c;
        for (c = 0; c < 4; c++) {
          int pb    = (int)((pix >> (c * 8)) & 0xff);
          int cw    = (int)(short)((color_current >> (c * 16)) & 0xffff);
          int prod  = ((pb << 4) * (cw >> 3)) >> 16;
          uchar sat = (prod > 0xff) ? 0xff : (prod < 0 ? 0 : (uchar)prod);
          lit_pix |= ((uint)sat << (c * 8));
        }

        uint out_pix = lit_pix;
        // Alpha blend against solid color (only if flag 0x8 set)
        if ((g_RenderStateFlags.dword & RENDER_SOLID_ALPHA_BLEND) != 0) {
          int alpha_idx = cur_alpha >> 8;
          ulonglong alpha_q     = *(ulonglong *)&g_AlphaTable[alpha_idx];
          ulonglong inv_alpha_q = alpha_q ^ *(ulonglong *)&g_AlphaTable[0xff];
          out_pix = 0;
          for (c = 0; c < 4; c++) {
            uint lit_b   = (lit_pix >> (c * 8)) & 0xff;
            uint solid_b = (solid_raw >> (c * 8)) & 0xff;
            uint a_w     = (uint)((alpha_q     >> (c * 16)) & 0xffff);
            uint inv_w   = (uint)((inv_alpha_q >> (c * 16)) & 0xffff);
            uint blended = (lit_b * inv_w + solid_b * a_w) >> 8;
            uchar sat    = (blended > 0xff) ? 0xff : (uchar)blended;
            out_pix |= ((uint)sat << (c * 8));
          }
        }

        // 16-bit pack and write
        ushort pix16 = (ushort)(((ulonglong)out_pix & g_BlueMask32.mm)  >> g_BlueBitShift.mm)
                     | (ushort)(((ulonglong)out_pix & g_GreenMask32.mm) >> g_GreenBlueBits.mm)
                     | (ushort)(((ulonglong)out_pix & g_RedMask32.mm)   >> g_TotalColorBits.mm);
        *(ushort *)((char *)g_CurrentScreenPtr + (edi >> 1)) = pix16;

        // Z-write
        if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
          *(int *)((char *)g_CurrentZBufferPtr + edi) = cur_w;
        }
      }
      // Advance (LAB_005b5043 → LAB_005b4f36 test Z again)
      edi += 4;
      if ((uint)edi >= (uint)g_ScanlinePixelCount) break;
      cur_u     += g_DeltaTextureU;
      cur_v     += g_DeltaTextureV;
      cur_w     += g_DeltaDepthW;
      cur_alpha += g_VertexAlphaDelta;
      // color_current += color_delta with per-channel wrap-around protection
      {
        ulonglong stepped = 0;
        int c;
        for (c = 0; c < 4; c++) {
          ushort chan       = (ushort)((color_current >> (c * 16)) & 0xffff);
          ushort delta_chan = (ushort)((color_delta   >> (c * 16)) & 0xffff);
          ushort new_chan   = chan + delta_chan;
          short  clear_chan = (short)((clear_bits     >> (c * 16)) & 0xffff);
          if ((short)new_chan > clear_chan) {
            stepped |= ((ulonglong)new_chan << (c * 16));
          }
        }
        color_current = stepped;
      }
    }
    return;
  }

  // Loops A and B entry: alpha source setup (LAB_005b4b47).
  if ((g_RenderStateFlags.dword & RENDER_ALPHA_FROM_VERTEX) == 0) {
    cur_alpha = g_CurrentAlphaValue << 8;
    g_VertexAlphaDelta = 0;
  }

  if (g_CurrentTextureOpacityData != (void *)0x0) {
    // Loop B — textured with opacity map (LAB_005b4d22).
    while (1) {
      // Z-test
      if ((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0 || cur_w >= ((int *)g_CurrentZBufferPtr)[edi / 4]) {
        uint tex_idx = ((uint)cur_u >> g_TextureShift1.mm) & g_TextureMask1.u32[0];
        tex_idx += ((uint)cur_v >> g_TextureShift2.mm) & g_TextureMask2.u32[0];
        uint pix = g_Hardware32BitPalette[*((byte *)g_CurrentTextureData + tex_idx)];
        uint opacity = *((byte *)g_CurrentTextureOpacityData + tex_idx);

        if (opacity != 0) {
          // Fast-path candidate: alpha overshot + full opacity + standard blend mode
          int take_fast_path = (cur_alpha > 0xff00) && (opacity >= 0xff) && (g_BlendMode == 0);
          uint out_pix;

          if (take_fast_path) {
            // Fast path (LAB_005b4e3a): just lit pixel, no blend
            out_pix = 0;
            int c;
            for (c = 0; c < 4; c++) {
              int pb   = (int)((pix >> (c * 8)) & 0xff);
              int cw   = (int)(short)((color_current >> (c * 16)) & 0xffff);
              int prod = ((pb << 4) * (cw >> 3)) >> 16;
              uchar sat = (prod > 0xff) ? 0xff : (prod < 0 ? 0 : (uchar)prod);
              out_pix |= ((uint)sat << (c * 8));
            }
          }
          else {
            // Blend path (LAB_005b4da7): always reads framebuffer
            ushort pix16 = *(ushort *)((char *)g_CurrentScreenPtr + (edi >> 1));
            uint pix32 = ((uint)(pix16 & g_BlueMask16.u32[0])  << g_BlueBitShift.mm)
                       | ((uint)(pix16 & g_GreenMask16.u32[0]) << g_GreenBlueBits.mm)
                       | ((uint)(pix16 & g_RedMask16.u32[0])   << g_TotalColorBits.mm);
            ulonglong mm4 = 0;
            int c;
            for (c = 0; c < 4; c++) {
              mm4 |= ((ulonglong)((pix32 >> (c * 8)) & 0xff) << (c * 16));
            }

            // Lighting modulation
            ulonglong mm0_words = 0;
            for (c = 0; c < 4; c++) {
              int pb   = (int)((pix >> (c * 8)) & 0xff);
              int cw   = (int)(short)((color_current >> (c * 16)) & 0xffff);
              int prod = ((pb << 4) * (cw >> 3)) >> 16;
              uchar sat = (prod > 0xff) ? 0xff : (prod < 0 ? 0 : (uchar)prod);
              mm0_words |= ((ulonglong)sat << (c * 16));
            }

            // Combined alpha = (opacity * cur_alpha) >> 16
            int combined_idx = ((int)opacity * cur_alpha) >> 16;
            ulonglong alpha_q     = *(ulonglong *)&g_AlphaTable[combined_idx];
            ulonglong inv_alpha_q = alpha_q ^ *(ulonglong *)&g_AlphaTable[0xff];

            out_pix = 0;
            for (c = 0; c < 4; c++) {
              uint lit_w    = (mm0_words >> (c * 16)) & 0xffff;
              uint dest_w   = (mm4       >> (c * 16)) & 0xffff;
              uint alpha_w  = (alpha_q   >> (c * 16)) & 0xffff;
              uint invalp_w = (inv_alpha_q >> (c * 16)) & 0xffff;
              uint blended;
              if (g_BlendMode == 0) {
                blended = (lit_w * alpha_w + dest_w * invalp_w) >> 8;
              }
              else {
                blended = (lit_w * alpha_w + (dest_w << 8)) >> 8;
              }
              uchar sat = (blended > 0xff) ? 0xff : (uchar)blended;
              out_pix |= ((uint)sat << (c * 8));
            }
          }

          // 16-bit pack and write
          ushort pix16_out = (ushort)(((ulonglong)out_pix & g_BlueMask32.mm)  >> g_BlueBitShift.mm)
                          | (ushort)(((ulonglong)out_pix & g_GreenMask32.mm) >> g_GreenBlueBits.mm)
                          | (ushort)(((ulonglong)out_pix & g_RedMask32.mm)   >> g_TotalColorBits.mm);
          *(ushort *)((char *)g_CurrentScreenPtr + (edi >> 1)) = pix16_out;

          // Z-write
          if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
            *(int *)((char *)g_CurrentZBufferPtr + edi) = cur_w;
          }
        }
      }
      // Advance (LAB_005b4ed3)
      edi += 4;
      if ((uint)edi >= (uint)g_ScanlinePixelCount) break;
      cur_u     += g_DeltaTextureU;
      cur_v     += g_DeltaTextureV;
      cur_w     += g_DeltaDepthW;
      cur_alpha += g_VertexAlphaDelta;
      {
        ulonglong stepped = 0;
        int c;
        for (c = 0; c < 4; c++) {
          ushort chan       = (ushort)((color_current >> (c * 16)) & 0xffff);
          ushort delta_chan = (ushort)((color_delta   >> (c * 16)) & 0xffff);
          ushort new_chan   = chan + delta_chan;
          short  clear_chan = (short)((clear_bits     >> (c * 16)) & 0xffff);
          if ((short)new_chan > clear_chan) {
            stepped |= ((ulonglong)new_chan << (c * 16));
          }
        }
        color_current = stepped;
      }
    }
    return;
  }

  // Loop A — textured, no opacity map (LAB_005b4b73). Always alpha-blends.
  while (1) {
    // Z-test
    if ((g_RenderStateFlags.dword & RENDER_DEPTH_TEST) == 0 || cur_w >= ((int *)g_CurrentZBufferPtr)[edi / 4]) {
      uint tex_idx = ((uint)cur_u >> g_TextureShift1.mm) & g_TextureMask1.u32[0];
      tex_idx += ((uint)cur_v >> g_TextureShift2.mm) & g_TextureMask2.u32[0];
      uint pix = g_Hardware32BitPalette[*((byte *)g_CurrentTextureData + tex_idx)];

      if (pix != 0) {   // color-key skip
        // Framebuffer readback (gated on flag 0x20)
        ulonglong mm4 = 0;  // blend dest expanded to 4 ushorts
        if ((g_RenderStateFlags.dword & RENDER_BLEND_READ_DEST) != 0) {
          ushort pix16 = *(ushort *)((char *)g_CurrentScreenPtr + (edi >> 1));
          uint pix32 = ((uint)(pix16 & g_BlueMask16.u32[0])  << g_BlueBitShift.mm)
                     | ((uint)(pix16 & g_GreenMask16.u32[0]) << g_GreenBlueBits.mm)
                     | ((uint)(pix16 & g_RedMask16.u32[0])   << g_TotalColorBits.mm);
          int c;
          for (c = 0; c < 4; c++) {
            mm4 |= ((ulonglong)((pix32 >> (c * 8)) & 0xff) << (c * 16));
          }
        }

        // Lighting modulation → MM0 packed 4 bytes (then re-expanded to 4 ushorts for blend)
        ulonglong mm0_words = 0;
        int c;
        for (c = 0; c < 4; c++) {
          int pb   = (int)((pix >> (c * 8)) & 0xff);
          int cw   = (int)(short)((color_current >> (c * 16)) & 0xffff);
          int prod = ((pb << 4) * (cw >> 3)) >> 16;
          uchar sat = (prod > 0xff) ? 0xff : (prod < 0 ? 0 : (uchar)prod);
          mm0_words |= ((ulonglong)sat << (c * 16));  // stored as ushort for next mul
        }

        // Alpha blend (always)
        int alpha_idx = cur_alpha >> 8;
        ulonglong alpha_q     = *(ulonglong *)&g_AlphaTable[alpha_idx];
        ulonglong inv_alpha_q = alpha_q ^ *(ulonglong *)&g_AlphaTable[0xff];

        uint out_pix = 0;
        for (c = 0; c < 4; c++) {
          uint lit_w    = (mm0_words >> (c * 16)) & 0xffff;
          uint dest_w   = (mm4       >> (c * 16)) & 0xffff;
          uint alpha_w  = (alpha_q   >> (c * 16)) & 0xffff;
          uint invalp_w = (inv_alpha_q >> (c * 16)) & 0xffff;
          uint blended;
          if (g_BlendMode == 0) {
            // Standard alpha blend: lit*alpha + dest*(1-alpha)
            blended = (lit_w * alpha_w + dest_w * invalp_w) >> 8;
          }
          else {
            // Additive blend: lit*alpha + (dest << 8)
            blended = (lit_w * alpha_w + (dest_w << 8)) >> 8;
          }
          uchar sat = (blended > 0xff) ? 0xff : (uchar)blended;
          out_pix |= ((uint)sat << (c * 8));
        }

        // 16-bit pack and write
        ushort pix16_out = (ushort)(((ulonglong)out_pix & g_BlueMask32.mm)  >> g_BlueBitShift.mm)
                        | (ushort)(((ulonglong)out_pix & g_GreenMask32.mm) >> g_GreenBlueBits.mm)
                        | (ushort)(((ulonglong)out_pix & g_RedMask32.mm)   >> g_TotalColorBits.mm);
        *(ushort *)((char *)g_CurrentScreenPtr + (edi >> 1)) = pix16_out;

        // Z-write
        if ((g_RenderStateFlags.dword & RENDER_DEPTH_WRITE) != 0) {
          *(int *)((char *)g_CurrentZBufferPtr + edi) = cur_w;
        }
      }
    }
    // Advance
    edi += 4;
    if ((uint)edi >= (uint)g_ScanlinePixelCount) break;
    cur_u     += g_DeltaTextureU;
    cur_v     += g_DeltaTextureV;
    cur_w     += g_DeltaDepthW;
    cur_alpha += g_VertexAlphaDelta;
    {
      ulonglong stepped = 0;
      int c;
      for (c = 0; c < 4; c++) {
        ushort chan       = (ushort)((color_current >> (c * 16)) & 0xffff);
        ushort delta_chan = (ushort)((color_delta   >> (c * 16)) & 0xffff);
        ushort new_chan   = chan + delta_chan;
        short  clear_chan = (short)((clear_bits     >> (c * 16)) & 0xffff);
        if ((short)new_chan > clear_chan) {
          stepped |= ((ulonglong)new_chan << (c * 16));
        }
      }
      color_current = stepped;
    }
  }
  return;
}
