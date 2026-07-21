; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(int param_1,int param_2)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0 at 00426830
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00519bc0
        ;   Label: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
    CMP dword ptr [EDX + 0xc00],0x2     ; 00519bc4
    JGE 0x00519bd0                      ; 00519bcb
        ;   XREF to: 00519bd0 (CONDITIONAL_JUMP)  ; LAB_00519bd0
    XOR EAX,EAX                         ; 00519bcd
    RET                                 ; 00519bcf
    MOV EAX,dword ptr [ESP + 0x8]       ; 00519bd0
        ;   Label: LAB_00519bd0
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x26fc] ; 00519bd4
    RET                                 ; 00519bdb

