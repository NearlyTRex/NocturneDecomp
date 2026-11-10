; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_00484390(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_pos
; int              Stack[0xc]:4   top_pos
; int              Stack[0x10]:4   right_pos
; int              Stack[0x14]:4   bottom_pos
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00482f84
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2a78
;   TerminatedCString s_CEdScrollBar_setPosition_005d2a8e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484390
        ;   Label: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_00484390
    PUSH ESI                            ; 00484391
    PUSH EBP                            ; 00484392
    MOV EAX,dword ptr [ESP + 0x10]      ; 00484393
    MOV EDX,dword ptr [ESP + 0x14]      ; 00484397
    MOV dword ptr [EAX + 0x14],EDX      ; 0048439b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048439e
    MOV dword ptr [EAX + 0x18],EDX      ; 004843a2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004843a5
    INC EDX                             ; 004843a9
    MOV dword ptr [EAX + 0x1c],EDX      ; 004843aa
    MOV EDX,dword ptr [ESP + 0x20]      ; 004843ad
    INC EDX                             ; 004843b1
    MOV dword ptr [EAX + 0x20],EDX      ; 004843b2
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004843b5
    MOV EDX,dword ptr [EAX + 0x14]      ; 004843b8
    MOV EBX,dword ptr [EAX + 0x18]      ; 004843bb
    SUB ECX,EDX                         ; 004843be
    MOV EDX,dword ptr [EAX + 0x20]      ; 004843c0
    SUB EDX,EBX                         ; 004843c3
    CMP ECX,EDX                         ; 004843c5
    JG 0x004843fd                       ; 004843c7
        ;   XREF to: 004843fd (CONDITIONAL_JUMP)  ; LAB_004843fd
    MOV EBX,dword ptr [EAX + 0x18]      ; 004843c9
    ADD EBX,ECX                         ; 004843cc
    DEC EBX                             ; 004843ce
    MOV dword ptr [EAX + 0x24],EBX      ; 004843cf
    MOV EBX,dword ptr [EAX + 0x20]      ; 004843d2
    SUB EBX,ECX                         ; 004843d5
    MOV dword ptr [EAX + 0x10],0x0      ; 004843d7
    INC EBX                             ; 004843de
        ;   Label: LAB_004843de
    MOV dword ptr [EAX + 0x28],EBX      ; 004843df
    CMP ECX,0x4                         ; 004843e2
    JL 0x00484414                       ; 004843e5
        ;   XREF to: 00484414 (CONDITIONAL_JUMP)  ; LAB_00484414
    CMP EDX,0x4                         ; 004843e7
    JL 0x00484414                       ; 004843ea
        ;   XREF to: 00484414 (CONDITIONAL_JUMP)  ; LAB_00484414
    MOV ESI,dword ptr [EAX + 0x24]      ; 004843ec
    MOV EDX,dword ptr [EAX + 0x28]      ; 004843ef
    SUB EDX,ESI                         ; 004843f2
    CMP EDX,0x4                         ; 004843f4
    JL 0x00484414                       ; 004843f7
        ;   XREF to: 00484414 (CONDITIONAL_JUMP)  ; LAB_00484414
    POP EBP                             ; 004843f9
    POP ESI                             ; 004843fa
    POP EBX                             ; 004843fb
    RET                                 ; 004843fc
    MOV EBX,dword ptr [EAX + 0x14]      ; 004843fd
        ;   Label: LAB_004843fd
    ADD EBX,EDX                         ; 00484400
    DEC EBX                             ; 00484402
    MOV dword ptr [EAX + 0x24],EBX      ; 00484403
    MOV EBX,dword ptr [EAX + 0x1c]      ; 00484406
    SUB EBX,EDX                         ; 00484409
    MOV dword ptr [EAX + 0x10],0x1      ; 0048440b
    JMP 0x004843de                      ; 00484412
        ;   XREF to: 004843de (UNCONDITIONAL_JUMP)  ; LAB_004843de
    PUSH EDI                            ; 00484414
        ;   Label: LAB_00484414
    MOV EDI,0x5d2a78                    ; 00484415 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x11fb                      ; 0048441a
    PUSH 0x5d2a8e                       ; 0048441f | = "CEdScrollBar::setPosition - invalid d..."
    MOV dword ptr [0x01d046a0],EDI      ; 00484424 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0048442a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00484430
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00484435
    POP EDI                             ; 00484438
    POP EBP                             ; 00484439
    POP ESI                             ; 0048443a
    POP EBX                             ; 0048443b
    RET                                 ; 0048443c

