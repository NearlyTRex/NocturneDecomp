; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_buildCardList_FUN_005600e0(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)
;
; Parameters:
; int *            Stack[0x4]:4   out_card_count
; char * *         Stack[0x8]:4   out_driver_names
; char * *         Stack[0xc]:4   out_card_names
; int *            Stack[0x10]:4   out_vendor_ids
; int *            Stack[0x14]:4   out_device_ids
;
; XREF[1]:
;   core_menu.cpp_FUN_004ebf10 at 004ebf74
;
; Referenced Globals:
;   undefined4 DAT_0264bc48
;   undefined4 DAT_0264bcdc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005600e0
        ;   Label: engine_special.cpp_buildCardList_FUN_005600e0
    CMP dword ptr [0x0264bcdc],0x0      ; 005600e1 | DAT_0264bcdc
    JNZ 0x005600ee                      ; 005600e8
        ;   XREF to: 005600ee (CONDITIONAL_JUMP)  ; LAB_005600ee
    XOR EAX,EAX                         ; 005600ea
    POP EBP                             ; 005600ec
    RET                                 ; 005600ed
    PUSH EDI                            ; 005600ee
        ;   Label: LAB_005600ee
    PUSH ESI                            ; 005600ef
    PUSH EBX                            ; 005600f0
    MOV ECX,dword ptr [ESP + 0x24]      ; 005600f1
    PUSH ECX                            ; 005600f5
    MOV EBX,dword ptr [ESP + 0x24]      ; 005600f6
    PUSH EBX                            ; 005600fa
    MOV ESI,dword ptr [ESP + 0x24]      ; 005600fb
    PUSH ESI                            ; 005600ff
    MOV EDI,dword ptr [ESP + 0x24]      ; 00560100
    PUSH EDI                            ; 00560104
    MOV EBP,dword ptr [ESP + 0x24]      ; 00560105
    PUSH EBP                            ; 00560109
    CALL dword ptr [0x0264bc48]         ; 0056010a | DAT_0264bc48
    ADD ESP,0x14                        ; 00560110
    POP EBX                             ; 00560113
    POP ESI                             ; 00560114
    POP EDI                             ; 00560115
    POP EBP                             ; 00560116
    RET                                 ; 00560117

