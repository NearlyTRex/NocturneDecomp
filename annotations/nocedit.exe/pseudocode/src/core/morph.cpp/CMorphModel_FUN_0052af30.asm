; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_morph.cpp_CMorphModel_FUN_0052af30(CMorphModel * this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_FUN_0052bae0 at 0052bb34
;
; Referenced Globals:
;   double DOUBLE_0063a3ef = 0.0100000000000000
;
; Called Functions:
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
;   core_morph.cpp_FUN_0052b160
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0052af30
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052af30
    FCOMP double ptr [0x0063a3ef]       ; 0052af34 | double DOUBLE_0063a3ef
    FNSTSW AX                           ; 0052af3a
    SAHF                                ; 0052af3c
    JNC 0x0052af40                      ; 0052af3d | LAB_0052af40
        ;   XREF to: 0052af40 (CONDITIONAL_JUMP)
    RET                                 ; 0052af3f
    PUSH EBX                            ; 0052af40
        ;   Label: LAB_0052af40
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052af41
    PUSH EDX                            ; 0052af45
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052af46
    PUSH dword ptr [ESP + 0x10]         ; 0052af4a
    PUSH ECX                            ; 0052af4e
    CALL core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 ; 0052af4f | void core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel * this_ptr)
        ;   XREF to: 0052af70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052af54
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052af57
    PUSH dword ptr [ESP + 0xc]          ; 0052af5b
    PUSH EBX                            ; 0052af5f
    CALL core_morph.cpp_FUN_0052b160    ; 0052af60 | void core_morph.cpp_FUN_0052b160()
        ;   XREF to: 0052b160 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052af65
    POP EBX                             ; 0052af68
    RET                                 ; 0052af69

