; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure *this_ptr,CMatrix3x4f *matrices)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; CMatrix3x4f *    Stack[0x8]:4   matrices
; Local Variables:
; CMatrix3x4f      Stack[-0x40]:48  local_40
; int              Stack[-0x10]:4  local_10
; CBoneStructure * Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 005954fc
;
; Called Functions:
;   core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    NOP                                 ; 0058af40
        ;   Label: core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
    NOP                                 ; 0058af41
    NOP                                 ; 0058af42
    NOP                                 ; 0058af43
    NOP                                 ; 0058af44
    NOP                                 ; 0058af45
    NOP                                 ; 0058af46
    NOP                                 ; 0058af47
    NOP                                 ; 0058af48
    NOP                                 ; 0058af49
    PUSH EBX                            ; 0058af4a
    PUSH EBP                            ; 0058af4b
    SUB ESP,0x38                        ; 0058af4c
    MOV EBX,dword ptr [ESP + 0x44]      ; 0058af4f
    XOR EDX,EDX                         ; 0058af53
    MOV ECX,dword ptr [EBX]             ; 0058af55
    MOV dword ptr [ESP + 0x30],EDX      ; 0058af57
    TEST ECX,ECX                        ; 0058af5b
    JLE 0x0058afbe                      ; 0058af5d
        ;   XREF to: 0058afbe (CONDITIONAL_JUMP)  ; LAB_0058afbe
    PUSH EDI                            ; 0058af5f
    PUSH ESI                            ; 0058af60
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0058af61
    MOV dword ptr [ESP + 0x3c],EBX      ; 0058af65
    MOV EBX,dword ptr [ESP + 0x50]      ; 0058af69
    ADD EBP,0x58                        ; 0058af6d
    PUSH EBP                            ; 0058af70
        ;   Label: LAB_0058af70
    PUSH EBX                            ; 0058af71
    LEA ESI,[ESP + 0x10]                ; 0058af72
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0058af76
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0058af7b
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0058af7e
    JMP 0x03fc3fc0                      ; 0058af82
        ;   XREF to: 03fc3fc0 (UNCONDITIONAL_JUMP)  ; LAB_03fc3fc0
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0058af90
        ;   Label: LAB_0058af90
    MOV EDI,dword ptr [ESP + 0x38]      ; 0058af94
    ADD ESI,0x84                        ; 0058af98
    INC EDI                             ; 0058af9e
    MOV dword ptr [ESP + 0x3c],ESI      ; 0058af9f
    MOV dword ptr [ESP + 0x38],EDI      ; 0058afa3
    MOV ESI,EDI                         ; 0058afa7
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0058afa9
    ADD EBP,0x84                        ; 0058afad
    MOV EAX,dword ptr [EDI]             ; 0058afb3
    ADD EBX,0x30                        ; 0058afb5
    CMP ESI,EAX                         ; 0058afb8
    JL 0x0058af70                       ; 0058afba
        ;   XREF to: 0058af70 (CONDITIONAL_JUMP)  ; LAB_0058af70
    POP ESI                             ; 0058afbc
    POP EDI                             ; 0058afbd
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058afbe
        ;   Label: LAB_0058afbe
    PUSH EDX                            ; 0058afc2
    CALL core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80 ; 0058afc3
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure * this_ptr)
    ADD ESP,0x4                         ; 0058afc8
    ADD ESP,0x38                        ; 0058afcb
    POP EBP                             ; 0058afce
    POP EBX                             ; 0058afcf
    RET                                 ; 0058afd0
    MOV ECX,0xc                         ; 03fc3fc0
        ;   Label: LAB_03fc3fc0
    LEA ESI,[ESP + 0x8]                 ; 03fc3fc5
    LEA EDI,[EDI + 0x58]                ; 03fc3fc9
    MOV ECX,dword ptr [ESI]             ; 03fc3fcc
    MOV dword ptr [EDI],ECX             ; 03fc3fce
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3fd0
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3fd3
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3fd6
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3fd9
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3fdc
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3fdf
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3fe2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3fe5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3fe8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3feb
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3fee
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3ff1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3ff4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3ff7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3ffa
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3ffd
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4000
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc4003
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc4006
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4009
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc400c
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc400f
    ADD ESI,0x30                        ; 03fc4012
    ADD EDI,0x30                        ; 03fc4015
    XOR ECX,ECX                         ; 03fc4018
    JMP 0x0058af90                      ; 03fc401a
        ;   XREF to: 0058af90 (UNCONDITIONAL_JUMP)  ; LAB_0058af90

