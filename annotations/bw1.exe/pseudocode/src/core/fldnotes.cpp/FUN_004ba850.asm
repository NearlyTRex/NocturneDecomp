; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fldnotes_cpp_FUN_004ba850(undefined4 param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bb570 at 004bb598
;
; Referenced Globals:
;   void* PTR_core_fldnotes.cpp_PageResource_Text_dtor_FUN_004ba8d0_00600934 = 004ba8d0
;
; Called Functions:
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   unkaddr_004b9ab0.cpp_FUN_004ba730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba850
        ;   Label: core_fldnotes.cpp_FUN_004ba850
    PUSH ESI                            ; 004ba851
    PUSH EDI                            ; 004ba852
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ba853
    PUSH EDX                            ; 004ba857
    CALL unkaddr_004b9ab0.cpp_FUN_004ba730 ; 004ba858
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004ba730()
    MOV EBX,EAX                         ; 004ba85d
    ADD ESP,0x4                         ; 004ba85f
    MOV dword ptr [EAX + 0x14],0x600934 ; 004ba862 | PTR_core_fldnotes.cpp_PageResource_Text_dtor_FUN_004ba8d0_00600934
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ba869
    LEA EDX,[EBX + 0x1c]                ; 004ba86d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ba870
    MOV EDI,EDX                         ; 004ba874
    MOV dword ptr [EBX + 0x11c],EAX     ; 004ba876
    PUSH EDI                            ; 004ba87c
    MOV AL,byte ptr [ESI]               ; 004ba87d
        ;   Label: LAB_004ba87d
    MOV byte ptr [EDI],AL               ; 004ba87f
    CMP AL,0x0                          ; 004ba881
    JZ 0x004ba895                       ; 004ba883
        ;   XREF to: 004ba895 (CONDITIONAL_JUMP)  ; LAB_004ba895
    MOV AL,byte ptr [ESI + 0x1]         ; 004ba885
    ADD ESI,0x2                         ; 004ba888
    MOV byte ptr [EDI + 0x1],AL         ; 004ba88b
    ADD EDI,0x2                         ; 004ba88e
    CMP AL,0x0                          ; 004ba891
    JNZ 0x004ba87d                      ; 004ba893
        ;   XREF to: 004ba87d (CONDITIONAL_JUMP)  ; LAB_004ba87d
    POP EDI                             ; 004ba895
        ;   Label: LAB_004ba895
    PUSH EDX                            ; 004ba896
    MOV ECX,dword ptr [EBX + 0x11c]     ; 004ba897
    PUSH ECX                            ; 004ba89d
    MOV dword ptr [EBX + 0x18],0x0      ; 004ba89e
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004ba8a5
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004ba8aa
    PUSH 0x6a                           ; 004ba8ad
    MOV ESI,dword ptr [EBX + 0x11c]     ; 004ba8af
    PUSH ESI                            ; 004ba8b5
    MOV dword ptr [EBX + 0x8],EAX       ; 004ba8b6
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004ba8b9
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004ba8be
    MOV dword ptr [EBX + 0xc],EAX       ; 004ba8c1
    MOV EAX,EBX                         ; 004ba8c4
    POP EDI                             ; 004ba8c6
    POP ESI                             ; 004ba8c7
    POP EBX                             ; 004ba8c8
    RET                                 ; 004ba8c9

