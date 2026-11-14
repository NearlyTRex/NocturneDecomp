; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0059c520(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)
;
; Parameters:
; uchar *          Stack[0x4]:4   dest_ip
; int              Stack[0x8]:4   octet1
; int              Stack[0xc]:4   octet2
; int              Stack[0x10]:4   octet3
; int              Stack[0x14]:4   octet4
;
; XREF[1]:
;   support_trisock.cpp_staticInit_FUN_0059c470 at 0059c489
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   support_trisock.cpp_buildIPAddress_FUN_0059c640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c520
        ;   Label: support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520
    PUSH ESI                            ; 0059c521
    PUSH EDI                            ; 0059c522
    PUSH EBP                            ; 0059c523
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059c524
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059c528
    PUSH EDX                            ; 0059c52c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0059c52d
    PUSH ECX                            ; 0059c531
    MOV ESI,dword ptr [ESP + 0x24]      ; 0059c532
    PUSH ESI                            ; 0059c536
    MOV EDI,dword ptr [ESP + 0x24]      ; 0059c537
    PUSH EDI                            ; 0059c53b
    PUSH EBX                            ; 0059c53c
    CALL support_trisock.cpp_buildIPAddress_FUN_0059c640 ; 0059c53d
        ;   XREF to: 0059c640 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_buildIPAddress_FUN_0059c640(uint8_t * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 0059c542
    TEST EAX,EAX                        ; 0059c545
    JZ 0x0059c550                       ; 0059c547
        ;   XREF to: 0059c550 (CONDITIONAL_JUMP)  ; LAB_0059c550
    MOV EAX,EBX                         ; 0059c549
    POP EBP                             ; 0059c54b
    POP EDI                             ; 0059c54c
    POP ESI                             ; 0059c54d
    POP EBX                             ; 0059c54e
    RET                                 ; 0059c54f
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059c550
        ;   Label: LAB_0059c550
    PUSH EDX                            ; 0059c554
    MOV ECX,dword ptr [ESP + 0x24]      ; 0059c555
    PUSH ECX                            ; 0059c559
    PUSH ESI                            ; 0059c55a
    PUSH EDI                            ; 0059c55b
    MOV EBP,0x5f82dd                    ; 0059c55c
    MOV EAX,0x62                        ; 0059c561
    PUSH 0x5f82f4                       ; 0059c566
    MOV dword ptr [0x01d1d400],EBP      ; 0059c56b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0059c571 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059c576
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x14                        ; 0059c57b
    MOV EAX,EBX                         ; 0059c57e
    POP EBP                             ; 0059c580
    POP EDI                             ; 0059c581
    POP ESI                             ; 0059c582
    POP EBX                             ; 0059c583
    RET                                 ; 0059c584

