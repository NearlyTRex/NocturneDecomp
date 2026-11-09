; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005aa5d0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_wateract.cpp_factoryFuncWaterActor_FUN_005aa5a0 at 005aa5b3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005aa5d0
        ;   Label: core_wateract.cpp_CWaterActor_ctor_FUN_005aa5d0
    PUSH EDI                            ; 005aa5d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005aa5d2
    PUSH EDX                            ; 005aa5d6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 005aa5d7
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005aa5dc
    PUSH 0x607cf0                       ; 005aa5df
    PUSH 0x3e8                          ; 005aa5e4
    ADD EAX,0x29c                       ; 005aa5e9
    PUSH EAX                            ; 005aa5ee
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005aa5ef
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    LEA EDX,[EAX + 0xfffffd64]          ; 005aa5f4
    MOV dword ptr [EDX + 0x154],0x607c14 ; 005aa5fa
    MOV dword ptr [EDX + 0x158],0x40800000 ; 005aa604
    MOV dword ptr [EDX + 0x15c],0x3dcccccd ; 005aa60e
    MOV dword ptr [EDX + 0x160],0x40800000 ; 005aa618
    MOV dword ptr [EDX + 0x164],0x8000  ; 005aa622
    MOV dword ptr [EDX + 0x2b228],0x0   ; 005aa62c
    MOV dword ptr [EDX + 0x2b22c],0x0   ; 005aa636
    MOV dword ptr [EDX + 0xfc],0x1      ; 005aa640
    MOV dword ptr [EDX + 0xf8],0x0      ; 005aa64a
    MOV dword ptr [EDX + 0x16c],0x3f800000 ; 005aa654
    MOV dword ptr [EDX + 0x170],0x3f800000 ; 005aa65e
    MOV dword ptr [EDX + 0x168],0x0     ; 005aa668
    MOV ESI,0x5f927e                    ; 005aa672
    MOV dword ptr [EDX + 0x27c],0x0     ; 005aa677
    ADD ESP,0xc                         ; 005aa681
    MOV byte ptr [EDX + 0x174],0x0      ; 005aa684
    LEA EDI,[EDX + 0x1b4]               ; 005aa68b
    MOV byte ptr [EDX + 0x194],0x0      ; 005aa691
    PUSH EDI                            ; 005aa698
    MOV AL,byte ptr [ESI]               ; 005aa699
        ;   Label: LAB_005aa699
    MOV byte ptr [EDI],AL               ; 005aa69b
    CMP AL,0x0                          ; 005aa69d
    JZ 0x005aa6b1                       ; 005aa69f
        ;   XREF to: 005aa6b1 (CONDITIONAL_JUMP)  ; LAB_005aa6b1
    MOV AL,byte ptr [ESI + 0x1]         ; 005aa6a1
    ADD ESI,0x2                         ; 005aa6a4
    MOV byte ptr [EDI + 0x1],AL         ; 005aa6a7
    ADD EDI,0x2                         ; 005aa6aa
    CMP AL,0x0                          ; 005aa6ad
    JNZ 0x005aa699                      ; 005aa6af
        ;   XREF to: 005aa699 (CONDITIONAL_JUMP)  ; LAB_005aa699
    POP EDI                             ; 005aa6b1
        ;   Label: LAB_005aa6b1
    MOV ESI,0x5f9283                    ; 005aa6b2
    LEA EDI,[EDX + 0x218]               ; 005aa6b7
    PUSH EDI                            ; 005aa6bd
    MOV AL,byte ptr [ESI]               ; 005aa6be
        ;   Label: LAB_005aa6be
    MOV byte ptr [EDI],AL               ; 005aa6c0
    CMP AL,0x0                          ; 005aa6c2
    JZ 0x005aa6d6                       ; 005aa6c4
        ;   XREF to: 005aa6d6 (CONDITIONAL_JUMP)  ; LAB_005aa6d6
    MOV AL,byte ptr [ESI + 0x1]         ; 005aa6c6
    ADD ESI,0x2                         ; 005aa6c9
    MOV byte ptr [EDI + 0x1],AL         ; 005aa6cc
    ADD EDI,0x2                         ; 005aa6cf
    CMP AL,0x0                          ; 005aa6d2
    JNZ 0x005aa6be                      ; 005aa6d4
        ;   XREF to: 005aa6be (CONDITIONAL_JUMP)  ; LAB_005aa6be
    POP EDI                             ; 005aa6d6
        ;   Label: LAB_005aa6d6
    MOV dword ptr [EDX + 0x280],0x0     ; 005aa6d7
    MOV dword ptr [EDX + 0x284],0x3f800000 ; 005aa6e1
    MOV dword ptr [EDX + 0x288],0x0     ; 005aa6eb
    MOV dword ptr [EDX + 0x294],0xff    ; 005aa6f5
    MOV EAX,dword ptr [EDX + 0x294]     ; 005aa6ff
    MOV dword ptr [EDX + 0x290],EAX     ; 005aa705
    MOV dword ptr [EDX + 0x28c],EAX     ; 005aa70b
    MOV EAX,EDX                         ; 005aa711
    POP EDI                             ; 005aa713
    POP ESI                             ; 005aa714
    RET                                 ; 005aa715

