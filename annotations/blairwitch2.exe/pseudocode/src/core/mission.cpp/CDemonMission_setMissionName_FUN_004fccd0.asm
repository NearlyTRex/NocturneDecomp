; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_004fccd0(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 005244a7
;
; Referenced Globals:
;   undefined4 DAT_01d1c630
;   undefined4 DAT_01d1c631
;   undefined4 DAT_01d1c632
;   undefined4 DAT_01d1c633
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fccd0
        ;   Label: core_mission.cpp_CDemonMission_setMissionName_FUN_004fccd0
    PUSH EDI                            ; 004fccd1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fccd2
    MOV EDI,0x1d1c630                   ; 004fccd6
    PUSH EDI                            ; 004fccdb | DAT_01d1c630
    MOV AL,byte ptr [ESI]               ; 004fccdc
        ;   Label: LAB_004fccdc
    MOV byte ptr [EDI],AL               ; 004fccde | DAT_01d1c630 | DAT_01d1c632
    CMP AL,0x0                          ; 004fcce0
    JZ 0x004fccf4                       ; 004fcce2
        ;   XREF to: 004fccf4 (CONDITIONAL_JUMP)  ; LAB_004fccf4
    MOV AL,byte ptr [ESI + 0x1]         ; 004fcce4
    ADD ESI,0x2                         ; 004fcce7
    MOV byte ptr [EDI + 0x1],AL         ; 004fccea | DAT_01d1c631 | DAT_01d1c633
    ADD EDI,0x2                         ; 004fcced
    CMP AL,0x0                          ; 004fccf0
    JNZ 0x004fccdc                      ; 004fccf2
        ;   XREF to: 004fccdc (CONDITIONAL_JUMP)  ; LAB_004fccdc
    POP EDI                             ; 004fccf4
        ;   Label: LAB_004fccf4
    POP EDI                             ; 004fccf5
    POP ESI                             ; 004fccf6
    RET                                 ; 004fccf7

