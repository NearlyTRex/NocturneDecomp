; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_buildCardList_FUN_00566400(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids)
;
; Parameters:
; int *            Stack[0x4]:4   out_card_count
; char * *         Stack[0x8]:4   out_driver_names
; char * *         Stack[0xc]:4   out_card_names
; int *            Stack[0x10]:4   out_vendor_ids
; int *            Stack[0x14]:4   out_device_ids
;
; XREF[1]:
;   core_menu.cpp_FUN_004e85a0 at 004e85f8
;
; Referenced Globals:
;   undefined4 DAT_02cf6074
;   undefined4 DAT_02cf6108
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00566400
        ;   Label: engine_special.cpp_buildCardList_FUN_00566400
    CMP dword ptr [0x02cf6108],0x0      ; 00566401 | DAT_02cf6108
    JNZ 0x0056640e                      ; 00566408
        ;   XREF to: 0056640e (CONDITIONAL_JUMP)  ; LAB_0056640e
    XOR EAX,EAX                         ; 0056640a
    POP EBP                             ; 0056640c
    RET                                 ; 0056640d
    PUSH EDI                            ; 0056640e
        ;   Label: LAB_0056640e
    PUSH ESI                            ; 0056640f
    PUSH EBX                            ; 00566410
    MOV ECX,dword ptr [ESP + 0x24]      ; 00566411
    PUSH ECX                            ; 00566415
    MOV EBX,dword ptr [ESP + 0x24]      ; 00566416
    PUSH EBX                            ; 0056641a
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056641b
    PUSH ESI                            ; 0056641f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00566420
    PUSH EDI                            ; 00566424
    MOV EBP,dword ptr [ESP + 0x24]      ; 00566425
    PUSH EBP                            ; 00566429
    CALL dword ptr [0x02cf6074]         ; 0056642a | DAT_02cf6074
    ADD ESP,0x14                        ; 00566430
    POP EBX                             ; 00566433
    POP ESI                             ; 00566434
    POP EDI                             ; 00566435
    POP EBP                             ; 00566436
    RET                                 ; 00566437

