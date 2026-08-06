; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004c1140(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_inv.cpp_CInventory_save_FUN_004c0fa0 at 004c10b8
;   core_mission.cpp_CDemonMission_FUN_004d8720 at 004d8a93
;
; Referenced Globals:
;   TerminatedCString s_s_s_s_005872ae
;   undefined1 DAT_005acc90
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c1140
        ;   Label: core_inv.cpp_CInventory_saveItems_FUN_004c1140
    PUSH EDI                            ; 004c1141
    PUSH EBP                            ; 004c1142
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c1143
    MOV EBP,dword ptr [ESP + 0x14]      ; 004c1147
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c114b
    XOR ESI,ESI                         ; 004c114e
    TEST EDX,EDX                        ; 004c1150
    JLE 0x004c1184                      ; 004c1152
        ;   XREF to: 004c1184 (CONDITIONAL_JUMP)  ; LAB_004c1184
    PUSH EBX                            ; 004c1154
    MOV EBX,EDI                         ; 004c1155
    MOV ECX,dword ptr [EBX + 0xc]       ; 004c1157
        ;   Label: LAB_004c1157
    PUSH ECX                            ; 004c115a
    PUSH ECX                            ; 004c115b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c115c
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c1161
    PUSH EAX                            ; 004c1164
    PUSH 0x5acc90                       ; 004c1165 | DAT_005acc90
    PUSH 0x5872ae                       ; 004c116a | = "%s%s \"%s\"\n"
    PUSH EBP                            ; 004c116f
    ADD EBX,0x4                         ; 004c1170
    INC ESI                             ; 004c1173
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1174
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005644f0(_FILE * file, char * format)
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c1179
    ADD ESP,0x14                        ; 004c117c
    CMP ESI,EDX                         ; 004c117f
    JL 0x004c1157                       ; 004c1181
        ;   XREF to: 004c1157 (CONDITIONAL_JUMP)  ; LAB_004c1157
    POP EBX                             ; 004c1183
    POP EBP                             ; 004c1184
        ;   Label: LAB_004c1184
    POP EDI                             ; 004c1185
    POP ESI                             ; 004c1186
    RET                                 ; 004c1187

