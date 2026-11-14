; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00481060(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; Referenced Globals:
;   undefined4 DAT_01bc11ec
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00481060
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00481060
    MOV EDX,dword ptr [0x01bc11ec]      ; 00481064 | DAT_01bc11ec
    TEST EDX,EDX                        ; 0048106a
    JZ 0x00481079                       ; 0048106c
        ;   XREF to: 00481079 (CONDITIONAL_JUMP)  ; LAB_00481079
    PUSH EAX                            ; 0048106e
    PUSH EDX                            ; 0048106f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00481070
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00481075
    RET                                 ; 00481078
    PUSH EAX                            ; 00481079
        ;   Label: LAB_00481079
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 0048107a
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 0048107f
    DEC EAX                             ; 00481082
    RET                                 ; 00481083

