; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051b740(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[9]:
;   core_boneguy.cpp_FUN_0041bb40 at 0041be6c
;   core_constrct.cpp_FUN_00445cb0 at 00446460
;   core_crate.cpp_FUN_00449600 at 004496a6
;   core_flamecan.cpp_FUN_004b91d0 at 004b924f
;   core_hiram.cpp_FUN_004ed2b0 at 004ed342
;   core_inv.cpp_FUN_004f7690 at 004f85a2
;   core_mimic.cpp_CMimic_processMorph_FUN_00510c20 at 00510ce4
;   core_passngr.cpp_FUN_00532af0 at 00532c31
;   core_werewolf.cpp_FUN_005af4a0 at 005af619
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e980c
;   TerminatedCString s_CDemonMission_markActorT_005e9820
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051b740
        ;   Label: core_mission.cpp_FUN_0051b740
    MOV EDX,dword ptr [EAX + 0x1130]    ; 0051b744
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051b74a
    MOV dword ptr [EAX + EDX*0x4 + 0x1134],ECX ; 0051b74e
    MOV EDX,dword ptr [EAX + 0x1130]    ; 0051b755
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051b75b
    MOV dword ptr [EAX + EDX*0x4 + 0x12c4],ECX ; 0051b75f
    MOV EDX,dword ptr [EAX + 0x1130]    ; 0051b766
    INC EDX                             ; 0051b76c
    MOV dword ptr [EAX + 0x1130],EDX    ; 0051b76d
    CMP EDX,0x64                        ; 0051b773
    JGE 0x0051b779                      ; 0051b776
        ;   XREF to: 0051b779 (CONDITIONAL_JUMP)  ; LAB_0051b779
    RET                                 ; 0051b778
    PUSH ESI                            ; 0051b779
        ;   Label: LAB_0051b779
    PUSH EBX                            ; 0051b77a
    MOV EBX,0x5e980c                    ; 0051b77b | = "..\\core\\mission.cpp"
    MOV ESI,0x453                       ; 0051b780
    PUSH 0x5e9820                       ; 0051b785 | = "CDemonMission::markActorToDelete - To..."
    MOV dword ptr [0x01d1d400],EBX      ; 0051b78a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051b790 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051b796
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051b79b
    POP EBX                             ; 0051b79e
    POP ESI                             ; 0051b79f
    RET                                 ; 0051b7a0

