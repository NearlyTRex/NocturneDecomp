; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[4]:
;   core_boneguy.cpp_FUN_00418a00 at 00418bd9
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0 at 004f60ee
;   core_stranger.cpp_FUN_005396d0 at 0053972f
;   core_turret.cpp_CTurret_process_FUN_005497f0 at 00549bdf
;
; Called Functions:
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d5b0
        ;   Label: core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
    SUB ESP,0x30                        ; 0055d5b1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0055d5b4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055d5b8
    PUSH EDX                            ; 0055d5bc
    LEA EAX,[ESP + 0x4]                 ; 0055d5bd
    PUSH EAX                            ; 0055d5c1
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70 ; 0055d5c2
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70()
    ADD ESP,0x8                         ; 0055d5c7
    PUSH EBX                            ; 0055d5ca
    LEA EAX,[ESP + 0x4]                 ; 0055d5cb
    PUSH EAX                            ; 0055d5cf
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0055d5d0
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    ADD ESP,0x8                         ; 0055d5d5
    MOV EAX,EBX                         ; 0055d5d8
    ADD ESP,0x30                        ; 0055d5da
    POP EBX                             ; 0055d5dd
    RET                                 ; 0055d5de

