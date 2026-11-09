; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004dc700(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_inv.cpp_FUN_004dc560 at 004dc678
;   core_mission.cpp_FUN_004f6410 at 004f6763
;
; Referenced Globals:
;   TerminatedCString s_s_s_s_005c648c
;   undefined1 DAT_005f0990
;
; Called Functions:
;   core_actor.cpp_FUN_00408870
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004dc700
        ;   Label: core_inv.cpp_CInventory_saveItems_FUN_004dc700
    PUSH EDI                            ; 004dc701
    PUSH EBP                            ; 004dc702
    MOV EDI,dword ptr [ESP + 0x10]      ; 004dc703
    MOV EBP,dword ptr [ESP + 0x14]      ; 004dc707
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dc70b
    XOR ESI,ESI                         ; 004dc70e
    TEST EDX,EDX                        ; 004dc710
    JLE 0x004dc744                      ; 004dc712
        ;   XREF to: 004dc744 (CONDITIONAL_JUMP)  ; LAB_004dc744
    PUSH EBX                            ; 004dc714
    MOV EBX,EDI                         ; 004dc715
    MOV ECX,dword ptr [EBX + 0x14]      ; 004dc717
        ;   Label: LAB_004dc717
    PUSH ECX                            ; 004dc71a
    PUSH ECX                            ; 004dc71b
    CALL core_actor.cpp_FUN_00408870    ; 004dc71c
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004dc721
    PUSH EAX                            ; 004dc724
    PUSH 0x5f0990                       ; 004dc725 | DAT_005f0990
    PUSH 0x5c648c                       ; 004dc72a | = "%s%s \"%s\"\n"
    PUSH EBP                            ; 004dc72f
    ADD EBX,0x4                         ; 004dc730
    INC ESI                             ; 004dc733
    CALL crt_unknown.c_FUN_005a3140     ; 004dc734
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dc739
    ADD ESP,0x14                        ; 004dc73c
    CMP ESI,EDX                         ; 004dc73f
    JL 0x004dc717                       ; 004dc741
        ;   XREF to: 004dc717 (CONDITIONAL_JUMP)  ; LAB_004dc717
    POP EBX                             ; 004dc743
    POP EBP                             ; 004dc744
        ;   Label: LAB_004dc744
    POP EDI                             ; 004dc745
    POP ESI                             ; 004dc746
    RET                                 ; 004dc747

