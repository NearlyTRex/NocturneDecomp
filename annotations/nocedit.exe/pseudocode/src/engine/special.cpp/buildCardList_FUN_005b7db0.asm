; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_buildCardList_FUN_005b7db0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)
;
; Parameters:
; int *            Stack[0x4]:4   out_card_count
; char * *         Stack[0x8]:4   out_driver_names
; char * *         Stack[0xc]:4   out_card_names
; int *            Stack[0x10]:4   out_vendor_ids
; int *            Stack[0x14]:4   out_device_ids
;
; XREF[1]:
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00511769
;
; Referenced Globals:
;   APIDLL_buildCardList* g_APIDLL_buildCardList
;   int g_LoadedExternalDLLRenderer
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b7db0
        ;   Label: engine_special.cpp_buildCardList_FUN_005b7db0
    CMP dword ptr [0x03f6b978],0x0      ; 005b7db1 | g_LoadedExternalDLLRenderer
    JNZ 0x005b7dbe                      ; 005b7db8
        ;   XREF to: 005b7dbe (CONDITIONAL_JUMP)  ; LAB_005b7dbe
    XOR EAX,EAX                         ; 005b7dba
    POP EBP                             ; 005b7dbc
    RET                                 ; 005b7dbd
    PUSH EDI                            ; 005b7dbe
        ;   Label: LAB_005b7dbe
    PUSH ESI                            ; 005b7dbf
    PUSH EBX                            ; 005b7dc0
    MOV ECX,dword ptr [ESP + 0x24]      ; 005b7dc1
    PUSH ECX                            ; 005b7dc5
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b7dc6
    PUSH EBX                            ; 005b7dca
    MOV ESI,dword ptr [ESP + 0x24]      ; 005b7dcb
    PUSH ESI                            ; 005b7dcf
    MOV EDI,dword ptr [ESP + 0x24]      ; 005b7dd0
    PUSH EDI                            ; 005b7dd4
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b7dd5
    PUSH EBP                            ; 005b7dd9
    CALL dword ptr [0x03f6b91c]         ; 005b7dda | g_APIDLL_buildCardList
    ADD ESP,0x14                        ; 005b7de0
    POP EBX                             ; 005b7de3
    POP ESI                             ; 005b7de4
    POP EDI                             ; 005b7de5
    POP EBP                             ; 005b7de6
    RET                                 ; 005b7de7

