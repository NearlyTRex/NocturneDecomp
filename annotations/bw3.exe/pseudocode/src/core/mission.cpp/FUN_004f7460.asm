; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004f7460(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052ba43
;
; Referenced Globals:
;   undefined4 DAT_01d882a0
;   undefined4 DAT_01d882a1
;   undefined4 DAT_01d882a2
;   undefined4 DAT_01d882a3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f7460
        ;   Label: core_mission.cpp_FUN_004f7460
    PUSH EDI                            ; 004f7461
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7462
    MOV EDI,0x1d882a0                   ; 004f7466
    PUSH EDI                            ; 004f746b | DAT_01d882a0
    MOV AL,byte ptr [ESI]               ; 004f746c
        ;   Label: LAB_004f746c
    MOV byte ptr [EDI],AL               ; 004f746e | DAT_01d882a0 | DAT_01d882a2
    CMP AL,0x0                          ; 004f7470
    JZ 0x004f7484                       ; 004f7472
        ;   XREF to: 004f7484 (CONDITIONAL_JUMP)  ; LAB_004f7484
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7474
    ADD ESI,0x2                         ; 004f7477
    MOV byte ptr [EDI + 0x1],AL         ; 004f747a | DAT_01d882a1 | DAT_01d882a3
    ADD EDI,0x2                         ; 004f747d
    CMP AL,0x0                          ; 004f7480
    JNZ 0x004f746c                      ; 004f7482
        ;   XREF to: 004f746c (CONDITIONAL_JUMP)  ; LAB_004f746c
    POP EDI                             ; 004f7484
        ;   Label: LAB_004f7484
    POP EDI                             ; 004f7485
    POP ESI                             ; 004f7486
    RET                                 ; 004f7487

