; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_005a1300(CInStreamMemory *this_ptr,undefined4 *param_2,uint param_3)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1300
        ;   Label: support_trstream.cpp_CInStreamMemory_read_FUN_005a1300
    PUSH ESI                            ; 005a1301
    PUSH EBP                            ; 005a1302
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a1303
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a1307
    CMP dword ptr [EDX + 0x4],0x0       ; 005a130b
    JZ 0x005a134d                       ; 005a130f
        ;   XREF to: 005a134d (CONDITIONAL_JUMP)  ; LAB_005a134d
    MOV ESI,dword ptr [EDX + 0x8]       ; 005a1311
    CMP ESI,dword ptr [EDX + 0xc]       ; 005a1314
    JLE 0x005a1356                      ; 005a1317
        ;   XREF to: 005a1356 (CONDITIONAL_JUMP)  ; LAB_005a1356
    MOV EAX,ESI                         ; 005a1319
    SUB EAX,dword ptr [EDX + 0xc]       ; 005a131b
    CMP EBX,EAX                         ; 005a131e
    JLE 0x005a1324                      ; 005a1320
        ;   XREF to: 005a1324 (CONDITIONAL_JUMP)  ; LAB_005a1324
    MOV EBX,EAX                         ; 005a1322
    PUSH EDI                            ; 005a1324
        ;   Label: LAB_005a1324
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a1325
    MOV ESI,dword ptr [EDX + 0x4]       ; 005a1329
    MOV EBP,dword ptr [EDX + 0xc]       ; 005a132c
    MOV ECX,EBX                         ; 005a132f
    ADD ESI,EBP                         ; 005a1331
    PUSH EDI                            ; 005a1333
    MOV EAX,ECX                         ; 005a1334
    SHR ECX,0x2                         ; 005a1336
    MOVSD.REP ES:EDI,ESI                ; 005a1339
    MOV CL,AL                           ; 005a133b
    AND CL,0x3                          ; 005a133d
    MOVSB.REP ES:EDI,ESI                ; 005a1340
    POP EDI                             ; 005a1342
    ADD dword ptr [EDX + 0xc],EBX       ; 005a1343
    MOV EAX,EBX                         ; 005a1346
    POP EDI                             ; 005a1348
    POP EBP                             ; 005a1349
    POP ESI                             ; 005a134a
    POP EBX                             ; 005a134b
    RET                                 ; 005a134c
    MOV EAX,0xfffffffe                  ; 005a134d
        ;   Label: LAB_005a134d
    POP EBP                             ; 005a1352
    POP ESI                             ; 005a1353
    POP EBX                             ; 005a1354
    RET                                 ; 005a1355
    MOV EAX,0xffffffff                  ; 005a1356
        ;   Label: LAB_005a1356
    POP EBP                             ; 005a135b
    POP ESI                             ; 005a135c
    POP EBX                             ; 005a135d
    RET                                 ; 005a135e

