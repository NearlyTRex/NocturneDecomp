; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_FUN_00524630(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c330
;
; Referenced Globals:
;   undefined1 DAT_02f35f10
;   undefined1 DAT_02f35f11
;   undefined1 DAT_02f35f12
;   undefined1 DAT_02f35f13
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00524630
        ;   Label: core_mission.cpp_CDemonMission_FUN_00524630
    PUSH EDI                            ; 00524631
    MOV ESI,dword ptr [ESP + 0x10]      ; 00524632
    MOV EDI,0x2f35f10                   ; 00524636 | DAT_02f35f10
    PUSH EDI                            ; 0052463b | DAT_02f35f10
    MOV AL,byte ptr [ESI]               ; 0052463c
        ;   Label: LAB_0052463c
    MOV byte ptr [EDI],AL               ; 0052463e | DAT_02f35f10 | DAT_02f35f12
    CMP AL,0x0                          ; 00524640
    JZ 0x00524654                       ; 00524642
        ;   XREF to: 00524654 (CONDITIONAL_JUMP)  ; LAB_00524654
    MOV AL,byte ptr [ESI + 0x1]         ; 00524644
    ADD ESI,0x2                         ; 00524647
    MOV byte ptr [EDI + 0x1],AL         ; 0052464a | DAT_02f35f11 | DAT_02f35f13
    ADD EDI,0x2                         ; 0052464d
    CMP AL,0x0                          ; 00524650
    JNZ 0x0052463c                      ; 00524652
        ;   XREF to: 0052463c (CONDITIONAL_JUMP)  ; LAB_0052463c
    POP EDI                             ; 00524654
        ;   Label: LAB_00524654
    POP EDI                             ; 00524655
    POP ESI                             ; 00524656
    RET                                 ; 00524657

