; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004826c0(CStrList *this_ptr,int index1,int index2)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index1
; int              Stack[0xc]:4   index2
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00485010 at 00485023
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd5ec
;   TerminatedCString s_CStrList_swap_invalid_in_005bd602
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004826c0
        ;   Label: shape_edittool.cpp_CStrList_swap_FUN_004826c0
    PUSH ESI                            ; 004826c1
    PUSH EDI                            ; 004826c2
    PUSH EBP                            ; 004826c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004826c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004826c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004826cc
    TEST EDI,EDI                        ; 004826d0
    JL 0x004826da                       ; 004826d2
        ;   XREF to: 004826da (CONDITIONAL_JUMP)  ; LAB_004826da
    MOV EDX,dword ptr [EBX]             ; 004826d4
    CMP EDI,EDX                         ; 004826d6
    JL 0x00482705                       ; 004826d8
        ;   XREF to: 00482705 (CONDITIONAL_JUMP)  ; LAB_00482705
    MOV EBP,0x5bd5ec                    ; 004826da | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004826da
    MOV EAX,0xd2a                       ; 004826df
    PUSH 0x5bd602                       ; 004826e4 | = "CStrList::swap - invalid indices"
    MOV dword ptr [0x01d71de0],EBP      ; 004826e9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004826ef | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004826f4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004826f9
    CMP EDI,ESI                         ; 004826fc
    JNZ 0x00482716                      ; 004826fe
        ;   XREF to: 00482716 (CONDITIONAL_JUMP)  ; LAB_00482716
    POP EBP                             ; 00482700
    POP EDI                             ; 00482701
    POP ESI                             ; 00482702
    POP EBX                             ; 00482703
    RET                                 ; 00482704
    TEST ESI,ESI                        ; 00482705
        ;   Label: LAB_00482705
    JL 0x004826da                       ; 00482707
        ;   XREF to: 004826da (CONDITIONAL_JUMP)  ; LAB_004826da
    CMP ESI,EDX                         ; 00482709
    JGE 0x004826da                      ; 0048270b
        ;   XREF to: 004826da (CONDITIONAL_JUMP)  ; LAB_004826da
    CMP EDI,ESI                         ; 0048270d
    JNZ 0x00482716                      ; 0048270f
        ;   XREF to: 00482716 (CONDITIONAL_JUMP)  ; LAB_00482716
    POP EBP                             ; 00482711
    POP EDI                             ; 00482712
    POP ESI                             ; 00482713
    POP EBX                             ; 00482714
    RET                                 ; 00482715
    LEA EAX,[EDI*0x4 + 0x0]             ; 00482716
        ;   Label: LAB_00482716
    MOV ECX,dword ptr [EBX + 0x8]       ; 0048271d
    ADD EAX,ECX                         ; 00482720
    MOV ECX,dword ptr [ECX + ESI*0x4]   ; 00482722
    MOV EDI,dword ptr [EAX]             ; 00482725
    MOV dword ptr [EAX],ECX             ; 00482727
    MOV EAX,dword ptr [EBX + 0x8]       ; 00482729
    MOV dword ptr [EAX + ESI*0x4],EDI   ; 0048272c
    POP EBP                             ; 0048272f
    POP EDI                             ; 00482730
    POP ESI                             ; 00482731
    POP EBX                             ; 00482732
    RET                                 ; 00482733

