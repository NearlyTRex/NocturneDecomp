; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_buildCardList_FUN_00582b30(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)
;
; Parameters:
; int *            Stack[0x4]:4   out_card_count
; char * *         Stack[0x8]:4   out_driver_names
; char * *         Stack[0xc]:4   out_card_names
; int *            Stack[0x10]:4   out_vendor_ids
; int *            Stack[0x14]:4   out_device_ids
;
; XREF[1]:
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050aae8
;
; Referenced Globals:
;   undefined4 DAT_02c83418
;   undefined4 DAT_02c834ac
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00582b30
        ;   Label: engine_special.cpp_buildCardList_FUN_00582b30
    CMP dword ptr [0x02c834ac],0x0      ; 00582b31 | DAT_02c834ac
    JNZ 0x00582b3e                      ; 00582b38
        ;   XREF to: 00582b3e (CONDITIONAL_JUMP)  ; LAB_00582b3e
    XOR EAX,EAX                         ; 00582b3a
    POP EBP                             ; 00582b3c
    RET                                 ; 00582b3d
    PUSH EDI                            ; 00582b3e
        ;   Label: LAB_00582b3e
    PUSH ESI                            ; 00582b3f
    PUSH EBX                            ; 00582b40
    MOV ECX,dword ptr [ESP + 0x24]      ; 00582b41
    PUSH ECX                            ; 00582b45
    MOV EBX,dword ptr [ESP + 0x24]      ; 00582b46
    PUSH EBX                            ; 00582b4a
    MOV ESI,dword ptr [ESP + 0x24]      ; 00582b4b
    PUSH ESI                            ; 00582b4f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00582b50
    PUSH EDI                            ; 00582b54
    MOV EBP,dword ptr [ESP + 0x24]      ; 00582b55
    PUSH EBP                            ; 00582b59
    CALL dword ptr [0x02c83418]         ; 00582b5a | DAT_02c83418
    ADD ESP,0x14                        ; 00582b60
    POP EBX                             ; 00582b63
    POP ESI                             ; 00582b64
    POP EDI                             ; 00582b65
    POP EBP                             ; 00582b66
    RET                                 ; 00582b67

