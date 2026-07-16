; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLbuildCardList_FUN_100052e0(int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids,int *out_device_ids)
;
; Parameters:
; int *            Stack[0x4]:4   out_card_count
; void *           Stack[0x8]:4   enum_data_buffer
; char * *         Stack[0xc]:4   out_card_names
; int *            Stack[0x10]:4   out_vendor_ids
; int *            Stack[0x14]:4   out_device_ids
;
; Referenced Globals:
;   uint[16] g_AdapterDeviceId
;   undefined4 g_AdapterDeviceId[1]
;   uint[16] g_AdapterVendorId
;   undefined4 g_AdapterVendorId[1]
;   char[16][512] g_AdapterDriverName
;   undefined4 g_AdapterDriverName[1][0]
;   int g_AdapterCount = 0x0
;   char[16][512] g_AdapterDescription
;   undefined4 g_AdapterDescription[1][0]
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100052e0
        ;   Label: dll_dx7.cpp_APIDLLbuildCardList_FUN_100052e0
    PUSH EBX                            ; 100052e4
    PUSH ESI                            ; 100052e5
    MOV EBX,dword ptr [0x1020de34]      ; 100052e6 | g_AdapterCount
    PUSH EDI                            ; 100052ec
    MOV dword ptr [EAX],EBX             ; 100052ed
    PUSH EBP                            ; 100052ef
    TEST EBX,EBX                        ; 100052f0
    JLE 0x10005338                      ; 100052f2
        ;   XREF to: 10005338 (CONDITIONAL_JUMP)  ; LAB_10005338
    XOR EBP,EBP                         ; 100052f4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 100052f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 100052fa
    MOV ESI,0x101386b0                  ; 100052fe | g_AdapterDeviceId
    MOV EDI,dword ptr [ESP + 0x24]      ; 10005303
    MOV ECX,EBX                         ; 10005307
    MOVSD.REP ES:EDI,ESI                ; 10005309 | g_AdapterDeviceId | g_AdapterDeviceId[1]
    MOV ESI,0x10138ef0                  ; 1000530b | g_AdapterVendorId
    MOV EDI,dword ptr [ESP + 0x20]      ; 10005310
    MOV ECX,EBX                         ; 10005314
    MOVSD.REP ES:EDI,ESI                ; 10005316 | g_AdapterVendorId | g_AdapterVendorId[1]
    LEA ECX,[EBP + 0x101398d0]          ; 10005318 | g_AdapterDriverName
        ;   Label: LAB_10005318
    ADD EBP,0x200                       ; 1000531e
    MOV dword ptr [EAX],ECX             ; 10005324 | g_AdapterDriverName | g_AdapterDriverName[1][0]
    ADD EDX,0x4                         ; 10005326
    LEA ECX,[EBP + 0x10236710]          ; 10005329 | g_AdapterDescription
    ADD EAX,0x4                         ; 1000532f
    DEC EBX                             ; 10005332
    MOV dword ptr [EDX + -0x4],ECX      ; 10005333 | g_AdapterDescription | g_AdapterDescription[1][0]
    JNZ 0x10005318                      ; 10005336
        ;   XREF to: 10005318 (CONDITIONAL_JUMP)  ; LAB_10005318
    MOV EAX,0x1                         ; 10005338
        ;   Label: LAB_10005338
    POP EBP                             ; 1000533d
    POP EDI                             ; 1000533e
    POP ESI                             ; 1000533f
    POP EBX                             ; 10005340
    RET                                 ; 10005341

