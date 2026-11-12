; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004f6f10(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[17]:
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419ea0
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417d2d
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 0042157f
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 004432c6
;   core_crate.cpp_FUN_004461c0 at 00446268
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598dea
;   core_flamecan.cpp_CFlameCan_process_FUN_004a7160 at 004a71df
;   core_inv.cpp_FUN_004da880 at 004db2a1
;   core_passngr.cpp_CPassenger_process_FUN_0050a7d0 at 0050a911
;   core_pryemorp.cpp_CPryeMorph_process_FUN_00527780 at 005278ce
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c8b0e
;   TerminatedCString s_CDemonMission_markActorT_005c8b22
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f6f10
        ;   Label: core_mission.cpp_FUN_004f6f10
    MOV EDX,dword ptr [EAX + 0x1018]    ; 004f6f14
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f6f1a
    MOV dword ptr [EAX + EDX*0x4 + 0x101c],ECX ; 004f6f1e
    MOV EDX,dword ptr [EAX + 0x1018]    ; 004f6f25
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f6f2b
    MOV dword ptr [EAX + EDX*0x4 + 0x11ac],ECX ; 004f6f2f
    MOV EDX,dword ptr [EAX + 0x1018]    ; 004f6f36
    INC EDX                             ; 004f6f3c
    MOV dword ptr [EAX + 0x1018],EDX    ; 004f6f3d
    CMP EDX,0x64                        ; 004f6f43
    JGE 0x004f6f49                      ; 004f6f46
        ;   XREF to: 004f6f49 (CONDITIONAL_JUMP)  ; LAB_004f6f49
    RET                                 ; 004f6f48
    PUSH ESI                            ; 004f6f49
        ;   Label: LAB_004f6f49
    PUSH EBX                            ; 004f6f4a
    MOV EBX,0x5c8b0e                    ; 004f6f4b | = "..\\core\\mission.cpp"
    MOV ESI,0x453                       ; 004f6f50
    PUSH 0x5c8b22                       ; 004f6f55 | = "CDemonMission::markActorToDelete - To..."
    MOV dword ptr [0x01d71de0],EBX      ; 004f6f5a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f6f60 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f6f66
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f6f6b
    POP EBX                             ; 004f6f6e
    POP ESI                             ; 004f6f6f
    RET                                 ; 004f6f70

