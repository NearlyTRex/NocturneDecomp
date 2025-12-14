; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonImage * core_dimage.cpp_CDemonImage_dtor_FUN_004719c0(CDemonImage * this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004719c0
        ;   Label: core_dimage.cpp_CDemonImage_dtor_FUN_004719c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004719c1
    PUSH EBX                            ; 004719c5
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40 ; 004719c6
        ;   XREF to: 00471a40 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 004719cb
    MOV EAX,EBX                         ; 004719ce
    POP EBX                             ; 004719d0
    RET                                 ; 004719d1

