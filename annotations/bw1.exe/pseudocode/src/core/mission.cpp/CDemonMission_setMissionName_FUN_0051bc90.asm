; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_setMissionName_FUN_0051bc90(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 0054635c
;
; Referenced Globals:
;   undefined4 DAT_01d33b20
;   undefined4 DAT_01d33b21
;   undefined4 DAT_01d33b22
;   undefined4 DAT_01d33b23
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0051bc90
        ;   Label: core_mission.cpp_CDemonMission_setMissionName_FUN_0051bc90
    PUSH EDI                            ; 0051bc91
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051bc92
    MOV EDI,0x1d33b20                   ; 0051bc96
    PUSH EDI                            ; 0051bc9b | DAT_01d33b20
    MOV AL,byte ptr [ESI]               ; 0051bc9c
        ;   Label: LAB_0051bc9c
    MOV byte ptr [EDI],AL               ; 0051bc9e | DAT_01d33b20 | DAT_01d33b22
    CMP AL,0x0                          ; 0051bca0
    JZ 0x0051bcb4                       ; 0051bca2
        ;   XREF to: 0051bcb4 (CONDITIONAL_JUMP)  ; LAB_0051bcb4
    MOV AL,byte ptr [ESI + 0x1]         ; 0051bca4
    ADD ESI,0x2                         ; 0051bca7
    MOV byte ptr [EDI + 0x1],AL         ; 0051bcaa | DAT_01d33b21 | DAT_01d33b23
    ADD EDI,0x2                         ; 0051bcad
    CMP AL,0x0                          ; 0051bcb0
    JNZ 0x0051bc9c                      ; 0051bcb2
        ;   XREF to: 0051bc9c (CONDITIONAL_JUMP)  ; LAB_0051bc9c
    POP EDI                             ; 0051bcb4
        ;   Label: LAB_0051bcb4
    POP EDI                             ; 0051bcb5
    POP ESI                             ; 0051bcb6
    RET                                 ; 0051bcb7

