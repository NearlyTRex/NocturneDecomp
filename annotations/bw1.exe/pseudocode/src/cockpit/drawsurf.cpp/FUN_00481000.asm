; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_drawsurf_cpp_FUN_00481000(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bc11ec
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004c44e0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00481000
        ;   Label: cockpit_drawsurf.cpp_FUN_00481000
    MOV EAX,dword ptr [ESP + 0xc]       ; 00481003
    MOV EDX,dword ptr [0x01bc11ec]      ; 00481007 | DAT_01bc11ec
    TEST EDX,EDX                        ; 0048100d
    JZ 0x0048101f                       ; 0048100f
        ;   XREF to: 0048101f (CONDITIONAL_JUMP)  ; LAB_0048101f
    PUSH EAX                            ; 00481011
    PUSH EDX                            ; 00481012
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004c44e0 ; 00481013
        ;   XREF to: 004c44e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004c44e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00481018
    ADD ESP,0x4                         ; 0048101b
    RET                                 ; 0048101e
    MOV byte ptr [ESP],AL               ; 0048101f
        ;   Label: LAB_0048101f
    XOR AH,AH                           ; 00481022
    MOV byte ptr [ESP + 0x1],AH         ; 00481024
    MOV EAX,ESP                         ; 00481028
    PUSH EAX                            ; 0048102a
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 0048102b
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 00481030
    DEC EAX                             ; 00481033
    ADD ESP,0x4                         ; 00481034
    RET                                 ; 00481037

