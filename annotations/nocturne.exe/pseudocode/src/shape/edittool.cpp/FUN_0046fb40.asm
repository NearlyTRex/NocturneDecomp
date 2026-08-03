; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0046fb40(CEditorTools *param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_main.c_FUN_004c85f0 at 004c8a09
;   core_script.cpp_CScript_loadState_FUN_005052c0 at 005055d4
;   core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920 at 0050e990
;   core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0 at 00538350
;   core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0 at 0053bf1e
;   core_stranger.cpp_FUN_0053c800 at 0053cafe
;   core_stranger.cpp_FUN_0053f310 at 0053fbb9
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   TerminatedCString s_Warning_0057e5cf
;   CKeys* g_CKeys_PTR_005bac64 = 01cc30e4
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcddd4
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   CKeys g_CKeys_01cc30e4
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   shape_edittool.cpp_FUN_004720c0
;   shape_edittool.cpp_FUN_004722b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fb40
        ;   Label: shape_edittool.cpp_FUN_0046fb40
    PUSH ESI                            ; 0046fb41
    PUSH EDI                            ; 0046fb42
    PUSH EBP                            ; 0046fb43
    SUB ESP,0x8                         ; 0046fb44
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046fb47
    CMP dword ptr [0x01bcd070],0x0      ; 0046fb4b | DAT_01bcd070
    JNZ 0x0046fb77                      ; 0046fb52
        ;   XREF to: 0046fb77 (CONDITIONAL_JUMP)  ; LAB_0046fb77
    MOV ECX,0x57e4fa                    ; 0046fb54 | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8b                        ; 0046fb59
    PUSH 0x57e510                       ; 0046fb5e | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0046fb63 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0046fb69 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046fb6f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046fb74
    MOV EAX,[0x01bcd070]                ; 0046fb77 | DAT_01bcd070
        ;   Label: LAB_0046fb77
    PUSH 0x6a                           ; 0046fb7c
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0046fb7e
    PUSH EAX                            ; 0046fb84
    MOV dword ptr [0x01bcd9b8],EDX      ; 0046fb85 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0046fb8b
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0046fb90
    MOV [0x01bcd9bc],EAX                ; 0046fb93 | DAT_01bcd9bc
    LEA EAX,[ESP + 0x24]                ; 0046fb98
    MOV dword ptr [ESP],EAX             ; 0046fb9c
    MOV EAX,ESP                         ; 0046fb9f
    PUSH EAX                            ; 0046fba1
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046fba2
    PUSH ESI                            ; 0046fba6
    PUSH 0x1bca0d0                      ; 0046fba7
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0046fbac
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0046fbb1
    MOV EAX,0x57e5cf                    ; 0046fbb4 | = "Warning"
    PUSH EAX                            ; 0046fbb9 | = "Warning"
    MOV EDX,dword ptr [0x01bcd070]      ; 0046fbba | DAT_01bcd070
    XOR EBP,EBP                         ; 0046fbc0
    PUSH EDX                            ; 0046fbc2
    MOV dword ptr [ESP + 0x8],EBP       ; 0046fbc3
    MOV dword ptr [ESP + 0xc],EAX       ; 0046fbc7 | = "Warning"
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046fbcb
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0046fbd0
    PUSH 0x1bca0d0                      ; 0046fbd3
    MOV ECX,dword ptr [0x01bcd070]      ; 0046fbd8 | DAT_01bcd070
    PUSH ECX                            ; 0046fbde
    MOV EBX,EAX                         ; 0046fbdf
    MOV ESI,EAX                         ; 0046fbe1
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 0046fbe3
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0046fbe8
    MOV EBP,EAX                         ; 0046fbeb
    CMP EAX,EBX                         ; 0046fbed
    JLE 0x0046fbf3                      ; 0046fbef
        ;   XREF to: 0046fbf3 (CONDITIONAL_JUMP)  ; LAB_0046fbf3
    MOV ESI,EAX                         ; 0046fbf1
    PUSH 0x1bca0d0                      ; 0046fbf3
        ;   Label: LAB_0046fbf3
    MOV EBX,dword ptr [0x01bcd070]      ; 0046fbf8 | DAT_01bcd070
    PUSH EBX                            ; 0046fbfe
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 0046fbff
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0046fc04
    PUSH 0x0                            ; 0046fc07
    MOV EBX,EAX                         ; 0046fc09
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046fc0b
    PUSH EAX                            ; 0046fc0f | = "Warning"
    MOV EAX,[0x01bcd9bc]                ; 0046fc10 | DAT_01bcd9bc
    ADD EAX,EAX                         ; 0046fc15
    ADD EAX,EBX                         ; 0046fc17
    PUSH EAX                            ; 0046fc19
    MOV EAX,[0x01bcd9b8]                ; 0046fc1a | DAT_01bcd9b8
    SHL EAX,0x2                         ; 0046fc1f
    ADD EAX,ESI                         ; 0046fc22
    PUSH EAX                            ; 0046fc24
    PUSH EDI                            ; 0046fc25
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 0046fc26
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0046fc2b
    PUSH EDI                            ; 0046fc2e
    CALL shape_edittool.cpp_FUN_004722b0 ; 0046fc2f
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004722b0()
    ADD ESP,0x4                         ; 0046fc34
    PUSH 0xffff                         ; 0046fc37
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0046fc3c
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 0046fc41
    PUSH -0x1                           ; 0046fc44
    MOV EDX,dword ptr [0x01bcddd4]      ; 0046fc46 | DAT_01bcddd4
    MOV ECX,dword ptr [0x01c00c64]      ; 0046fc4c | DAT_01c00c64
    PUSH EDX                            ; 0046fc52
    MOV EDX,dword ptr [0x01c00c5c]      ; 0046fc53 | DAT_01c00c5c
    ADD EDX,ECX                         ; 0046fc59
    SUB EDX,EBX                         ; 0046fc5b
    MOV EAX,EDX                         ; 0046fc5d
    SAR EDX,0x1f                        ; 0046fc5f
    SUB EAX,EDX                         ; 0046fc62
    SAR EAX,0x1                         ; 0046fc64
    MOV EBX,dword ptr [0x01c00c60]      ; 0046fc66 | DAT_01c00c60
    MOV EDX,dword ptr [0x01c00c58]      ; 0046fc6c | DAT_01c00c58
    ADD EDX,EBX                         ; 0046fc72
    SUB EDX,EBP                         ; 0046fc74
    PUSH EAX                            ; 0046fc76
    MOV EAX,EDX                         ; 0046fc77
    SAR EDX,0x1f                        ; 0046fc79
    SUB EAX,EDX                         ; 0046fc7c
    SAR EAX,0x1                         ; 0046fc7e
    PUSH EAX                            ; 0046fc80
    PUSH 0x1bca0d0                      ; 0046fc81
    MOV ESI,dword ptr [0x01bcd070]      ; 0046fc86 | DAT_01bcd070
    PUSH ESI                            ; 0046fc8c
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0046fc8d
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0046fc92
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046fc95
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046fc9a
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EBP,dword ptr [0x005bac64]      ; 0046fc9f | g_CKeys_PTR_005bac64
    PUSH EBP                            ; 0046fca5 | g_CKeys_01cc30e4
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0 ; 0046fca6
        ;   XREF to: 004c41c0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0046fcab
    PUSH EDI                            ; 0046fcae
    CALL shape_edittool.cpp_FUN_004720c0 ; 0046fcaf
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 0046fcb4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0046fcb7
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0046fcbc
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    ADD ESP,0x8                         ; 0046fcc1
    POP EBP                             ; 0046fcc4
    POP EDI                             ; 0046fcc5
    POP ESI                             ; 0046fcc6
    POP EBX                             ; 0046fcc7
    RET                                 ; 0046fcc8

