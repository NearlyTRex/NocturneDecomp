; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; char *           Stack[0x10]:4   button_text
;
; XREF[2]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507619
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 0050722e
;
; Called Functions:
;   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
;   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6550
        ;   Label: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
    PUSH EDI                            ; 004a6551
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a6552
    PUSH EBX                            ; 004a6556
    PUSH EBX                            ; 004a6557
    CALL shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 ; 004a6558
        ;   XREF to: 004a6970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonHeight_FUN_004a6970(char * button_text)
    ADD ESP,0x4                         ; 004a655d
    ADD EAX,dword ptr [ESP + 0x18]      ; 004a6560
    DEC EAX                             ; 004a6564
    PUSH EAX                            ; 004a6565
    PUSH EBX                            ; 004a6566
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 ; 004a6567
        ;   XREF to: 004a68e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0(char * button_text)
    ADD ESP,0x4                         ; 004a656c
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a656f
    ADD EAX,ECX                         ; 004a6573
    DEC EAX                             ; 004a6575
    PUSH EAX                            ; 004a6576
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a6577
    PUSH EBX                            ; 004a657b
    PUSH ECX                            ; 004a657c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a657d
    PUSH EDI                            ; 004a6581
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590 ; 004a6582
        ;   XREF to: 004a6590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 004a6587
    POP EDI                             ; 004a658a
    POP EBX                             ; 004a658b
    RET                                 ; 004a658c

