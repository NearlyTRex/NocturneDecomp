; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_setVersionControlDirectory_FUN_004f7c00(CDemonMission *this_ptr,char *directory)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   directory
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052ec2f
;
; Referenced Globals:
;   undefined4 DAT_01d88308
;   undefined4 DAT_01d88309
;   undefined4 DAT_01d8830a
;   undefined4 DAT_01d8830b
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f7c00
        ;   Label: core_mission.cpp_CDemonMission_setVersionControlDirectory_FUN_004f7c00
    PUSH EDI                            ; 004f7c01
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7c02
    MOV EDI,0x1d88308                   ; 004f7c06
    PUSH EDI                            ; 004f7c0b | DAT_01d88308
    MOV AL,byte ptr [ESI]               ; 004f7c0c
        ;   Label: LAB_004f7c0c
    MOV byte ptr [EDI],AL               ; 004f7c0e | DAT_01d88308 | DAT_01d8830a
    CMP AL,0x0                          ; 004f7c10
    JZ 0x004f7c24                       ; 004f7c12
        ;   XREF to: 004f7c24 (CONDITIONAL_JUMP)  ; LAB_004f7c24
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7c14
    ADD ESI,0x2                         ; 004f7c17
    MOV byte ptr [EDI + 0x1],AL         ; 004f7c1a | DAT_01d88309 | DAT_01d8830b
    ADD EDI,0x2                         ; 004f7c1d
    CMP AL,0x0                          ; 004f7c20
    JNZ 0x004f7c0c                      ; 004f7c22
        ;   XREF to: 004f7c0c (CONDITIONAL_JUMP)  ; LAB_004f7c0c
    POP EDI                             ; 004f7c24
        ;   Label: LAB_004f7c24
    POP EDI                             ; 004f7c25
    POP ESI                             ; 004f7c26
    RET                                 ; 004f7c27

