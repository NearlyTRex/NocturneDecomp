; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004f62e0(undefined4 param_1)
;
;
; XREF[3]:
;   core_inv.cpp_CInventory_select_FUN_004f9bd0 at 004f9d2d
;   core_inv.cpp_FUN_004f7690 at 004f774f
;   core_inv.cpp_FUN_004fae10 at 004fb12f
;
; Referenced Globals:
;   TerminatedCString s_Add_to_dict_s_005e5f98
;   undefined4 DAT_01d08dc8
;
; Called Functions:
;   core_inv.cpp_FUN_004f60c0
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f62e0
        ;   Label: core_inv.cpp_getItemDisplayName_FUN_004f62e0
    PUSH ESI                            ; 004f62e1
    PUSH EDI                            ; 004f62e2
    PUSH EBP                            ; 004f62e3
    MOV EBP,ESP                         ; 004f62e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f62e6
    PUSH EDX                            ; 004f62e9
    MOV EBX,0x1d08dd0                   ; 004f62ea
    XOR ESI,ESI                         ; 004f62ef
    CALL core_inv.cpp_FUN_004f60c0      ; 004f62f1
        ;   XREF to: 004f60c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f60c0()
    MOV ECX,dword ptr [0x01d08dc8]      ; 004f62f6 | DAT_01d08dc8
    ADD ESP,0x4                         ; 004f62fc
    LEA EDI,[EAX + 0x78]                ; 004f62ff
    TEST ECX,ECX                        ; 004f6302
    JLE 0x004f6324                      ; 004f6304
        ;   XREF to: 004f6324 (CONDITIONAL_JUMP)  ; LAB_004f6324
    PUSH EBX                            ; 004f6306
        ;   Label: LAB_004f6306
    PUSH EDI                            ; 004f6307
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f6308
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f630d
    TEST EAX,EAX                        ; 004f6310
    JZ 0x004f6341                       ; 004f6312
        ;   XREF to: 004f6341 (CONDITIONAL_JUMP)  ; LAB_004f6341
    MOV EAX,[0x01d08dc8]                ; 004f6314 | DAT_01d08dc8
    INC ESI                             ; 004f6319
    ADD EBX,0x300                       ; 004f631a
    CMP ESI,EAX                         ; 004f6320
    JL 0x004f6306                       ; 004f6322
        ;   XREF to: 004f6306 (CONDITIONAL_JUMP)  ; LAB_004f6306
    PUSH EDI                            ; 004f6324
        ;   Label: LAB_004f6324
    PUSH 0x5e5f98                       ; 004f6325 | = "Add to dict: %s"
    PUSH 0x1d06d70                      ; 004f632a
    CALL crt_unknown.c_FUN_005bfb40     ; 004f632f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EAX,0x1d06d70                   ; 004f6334
    ADD ESP,0xc                         ; 004f6339
    POP EBP                             ; 004f633c
    POP EDI                             ; 004f633d
    POP ESI                             ; 004f633e
    POP EBX                             ; 004f633f
    RET                                 ; 004f6340
    LEA EAX,[EBX + 0x100]               ; 004f6341
        ;   Label: LAB_004f6341
    POP EBP                             ; 004f6347
    POP EDI                             ; 004f6348
    POP ESI                             ; 004f6349
    POP EBX                             ; 004f634a
    RET                                 ; 004f634b

