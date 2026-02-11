; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_005c66a0 (CStranger *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Called Functions:
;   core_hero.cpp_CHero_getGrabbed_FUN_004f28d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c66a0
        ;   Label: core_stranger.cpp_CStranger_getGrabbed_FUN_005c66a0
    PUSH ESI                            ; 005c66a1
    PUSH EBP                            ; 005c66a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c66a3
    CMP dword ptr [EBX + 0x1fba0],0x0   ; 005c66a7
    JNZ 0x005c673d                      ; 005c66ae
        ;   XREF to: 005c673d (CONDITIONAL_JUMP)  ; LAB_005c673d
    CMP dword ptr [EBX + 0x1fb9c],0x0   ; 005c66b4
    JNZ 0x005c673d                      ; 005c66bb
        ;   XREF to: 005c673d (CONDITIONAL_JUMP)  ; LAB_005c673d
    MOV ESI,dword ptr [EBX + 0x1fc38]   ; 005c66c1
    TEST ESI,ESI                        ; 005c66c7
    JZ 0x005c66d0                       ; 005c66c9
        ;   XREF to: 005c66d0 (CONDITIONAL_JUMP)  ; LAB_005c66d0
    CMP ESI,0x3                         ; 005c66cb
    JNZ 0x005c673d                      ; 005c66ce
        ;   XREF to: 005c673d (CONDITIONAL_JUMP)  ; LAB_005c673d
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c66d0
        ;   Label: LAB_005c66d0
    PUSH EBP                            ; 005c66d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c66d5
    PUSH EAX                            ; 005c66d9
    PUSH EBX                            ; 005c66da
    CALL core_hero.cpp_CHero_getGrabbed_FUN_004f28d0 ; 005c66db
        ;   XREF to: 004f28d0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_getGrabbed_FUN_004f28d0(CHero * this_ptr, CDemonActor * grabber, int grab_type)
    ADD ESP,0xc                         ; 005c66e0
    MOV ESI,EAX                         ; 005c66e3
    TEST EAX,EAX                        ; 005c66e5
    JZ 0x005c6737                       ; 005c66e7
        ;   XREF to: 005c6737 (CONDITIONAL_JUMP)  ; LAB_005c6737
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c66e9
    CMP EDX,dword ptr [EBX + 0x24b4]    ; 005c66ef
    JZ 0x005c670b                       ; 005c66f5
        ;   XREF to: 005c670b (CONDITIONAL_JUMP)  ; LAB_005c670b
    PUSH 0x0                            ; 005c66f7
    PUSH 0x0                            ; 005c66f9
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c66fb
    PUSH EBX                            ; 005c6701
    CALL dword ptr [EAX + 0x13c]        ; 005c6702
    ADD ESP,0xc                         ; 005c6708
    MOV ECX,dword ptr [EBX + 0x1fc2c]   ; 005c670b
        ;   Label: LAB_005c670b
    CMP ECX,dword ptr [EBX + 0x24f8]    ; 005c6711
    JZ 0x005c672d                       ; 005c6717
        ;   XREF to: 005c672d (CONDITIONAL_JUMP)  ; LAB_005c672d
    PUSH 0x0                            ; 005c6719
    PUSH 0x1                            ; 005c671b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c671d
    PUSH EBX                            ; 005c6723
    CALL dword ptr [EAX + 0x13c]        ; 005c6724
    ADD ESP,0xc                         ; 005c672a
    MOV dword ptr [EBX + 0x1fcd4],0x0   ; 005c672d
        ;   Label: LAB_005c672d
    MOV EAX,ESI                         ; 005c6737
        ;   Label: LAB_005c6737
    POP EBP                             ; 005c6739
    POP ESI                             ; 005c673a
    POP EBX                             ; 005c673b
    RET                                 ; 005c673c
    XOR EAX,EAX                         ; 005c673d
        ;   Label: LAB_005c673d
    POP EBP                             ; 005c673f
    POP ESI                             ; 005c6740
    POP EBX                             ; 005c6741
    RET                                 ; 005c6742

