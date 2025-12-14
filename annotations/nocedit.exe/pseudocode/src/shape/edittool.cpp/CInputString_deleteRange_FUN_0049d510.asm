; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510(CInputString * this_ptr, int start_pos, int end_pos)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_pos
; int              Stack[0xc]:4   end_pos
;
; XREF[3]:
;   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0 at 0049d5f6
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 at 0049d5b5
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 at 0049d8e3
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d510
        ;   Label: shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
    PUSH ESI                            ; 0049d511
    PUSH EDI                            ; 0049d512
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049d513
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049d517
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049d51b
    TEST EDI,EDI                        ; 0049d51f
    JL 0x0049d579                       ; 0049d521
        ;   XREF to: 0049d579 (CONDITIONAL_JUMP)  ; LAB_0049d579
    MOV EDX,dword ptr [EBX + 0x130]     ; 0049d523
        ;   Label: LAB_0049d523
    CMP ESI,EDX                         ; 0049d529
    JLE 0x0049d52f                      ; 0049d52b
        ;   XREF to: 0049d52f (CONDITIONAL_JUMP)  ; LAB_0049d52f
    MOV ESI,EDX                         ; 0049d52d
    CMP EDI,ESI                         ; 0049d52f
        ;   Label: LAB_0049d52f
    JGE 0x0049d575                      ; 0049d531
        ;   XREF to: 0049d575 (CONDITIONAL_JUMP)  ; LAB_0049d575
    MOV EAX,dword ptr [EBX + 0x130]     ; 0049d533
    SUB EAX,ESI                         ; 0049d539
    PUSH EAX                            ; 0049d53b
    LEA EAX,[EBX + ESI*0x1]             ; 0049d53c
    PUSH EAX                            ; 0049d53f
    LEA EAX,[EBX + EDI*0x1]             ; 0049d540
    PUSH EAX                            ; 0049d543
    SUB ESI,EDI                         ; 0049d544
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0049d546
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV ECX,dword ptr [EBX + 0x130]     ; 0049d54b
    ADD ESP,0xc                         ; 0049d551
    SUB ECX,ESI                         ; 0049d554
    MOV ESI,dword ptr [EBX + 0x134]     ; 0049d556
    MOV dword ptr [EBX + 0x130],ECX     ; 0049d55c
    CMP ESI,ECX                         ; 0049d562
    JLE 0x0049d56c                      ; 0049d564
        ;   XREF to: 0049d56c (CONDITIONAL_JUMP)  ; LAB_0049d56c
    MOV dword ptr [EBX + 0x134],ECX     ; 0049d566
    ADD EBX,dword ptr [EBX + 0x130]     ; 0049d56c
        ;   Label: LAB_0049d56c
    MOV byte ptr [EBX],0x0              ; 0049d572
    POP EDI                             ; 0049d575
        ;   Label: LAB_0049d575
    POP ESI                             ; 0049d576
    POP EBX                             ; 0049d577
    RET                                 ; 0049d578
    XOR EDI,EDI                         ; 0049d579
        ;   Label: LAB_0049d579
    JMP 0x0049d523                      ; 0049d57b
        ;   XREF to: 0049d523 (UNCONDITIONAL_JUMP)  ; LAB_0049d523

