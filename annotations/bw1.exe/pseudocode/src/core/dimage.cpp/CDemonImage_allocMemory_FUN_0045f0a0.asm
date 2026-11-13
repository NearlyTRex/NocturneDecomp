; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0045f0a0(CDemonImage *this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dimage.cpp_FUN_0045f190 at 0045f207
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f0a0
        ;   Label: core_dimage.cpp_CDemonImage_allocMemory_FUN_0045f0a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045f0a1
    PUSH EBX                            ; 0045f0a5
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100 ; 0045f0a6
        ;   XREF to: 0045f100 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_0045f100(CDemonImage * this_ptr)
    MOV EAX,dword ptr [EBX + 0x304]     ; 0045f0ab
    IMUL EAX,dword ptr [EBX + 0x308]    ; 0045f0b1
    ADD ESP,0x4                         ; 0045f0b8
    PUSH EAX                            ; 0045f0bb
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0045f0bc
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0045f0c1
    MOV dword ptr [EBX + 0x300],EAX     ; 0045f0c4
    TEST EAX,EAX                        ; 0045f0ca
    JZ 0x0045f0d0                       ; 0045f0cc
        ;   XREF to: 0045f0d0 (CONDITIONAL_JUMP)  ; LAB_0045f0d0
    POP EBX                             ; 0045f0ce
    RET                                 ; 0045f0cf
    PUSH ESI                            ; 0045f0d0
        ;   Label: LAB_0045f0d0
    MOV EBX,0x5d891b                    ; 0045f0d1
    MOV ESI,0x31                        ; 0045f0d6
    PUSH 0x5d892e                       ; 0045f0db
    MOV dword ptr [0x01d1d400],EBX      ; 0045f0e0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045f0e6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045f0ec
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045f0f1
    POP ESI                             ; 0045f0f4
    POP EBX                             ; 0045f0f5
    RET                                 ; 0045f0f6

