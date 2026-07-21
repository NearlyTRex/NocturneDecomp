; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004c14d0(int param_1)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d83ee
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;
; Called Functions:
;   FUN_004d8cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c14d0
        ;   Label: core_inv.cpp_CInventory_loadItems_FUN_004c14d0
    PUSH EDI                            ; 004c14d1
    PUSH EBP                            ; 004c14d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c14d3
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c14d7
    XOR EBX,EBX                         ; 004c14da
    TEST EDX,EDX                        ; 004c14dc
    JLE 0x004c1502                      ; 004c14de
        ;   XREF to: 004c1502 (CONDITIONAL_JUMP)  ; LAB_004c1502
    PUSH ESI                            ; 004c14e0
    MOV ESI,EDI                         ; 004c14e1
    MOV ECX,dword ptr [ESI + 0xc]       ; 004c14e3
        ;   Label: LAB_004c14e3
    PUSH ECX                            ; 004c14e6
    MOV EBP,dword ptr [0x005baf90]      ; 004c14e7 | DAT_005baf90
    PUSH EBP                            ; 004c14ed
    ADD ESI,0x4                         ; 004c14ee
    INC EBX                             ; 004c14f1
    CALL FUN_004d8cd0                   ; 004c14f2
        ;   XREF to: 004d8cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8cd0()
    MOV EAX,dword ptr [EDI + 0x8]       ; 004c14f7
    ADD ESP,0x8                         ; 004c14fa
    CMP EBX,EAX                         ; 004c14fd
    JL 0x004c14e3                       ; 004c14ff
        ;   XREF to: 004c14e3 (CONDITIONAL_JUMP)  ; LAB_004c14e3
    POP ESI                             ; 004c1501
    MOV dword ptr [EDI + 0x450],0x0     ; 004c1502
        ;   Label: LAB_004c1502
    POP EBP                             ; 004c150c
    POP EDI                             ; 004c150d
    POP EBX                             ; 004c150e
    RET                                 ; 004c150f

