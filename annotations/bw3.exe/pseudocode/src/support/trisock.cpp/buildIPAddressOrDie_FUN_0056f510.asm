; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   support_trisock.cpp_staticInit_FUN_0056f460 at 0056f479
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   support_trisock.cpp_buildIPAddress_FUN_0056f630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f510
        ;   Label: support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510
    PUSH ESI                            ; 0056f511
    PUSH EDI                            ; 0056f512
    PUSH EBP                            ; 0056f513
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056f514
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056f518
    PUSH EDX                            ; 0056f51c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0056f51d
    PUSH ECX                            ; 0056f521
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056f522
    PUSH ESI                            ; 0056f526
    MOV EDI,dword ptr [ESP + 0x24]      ; 0056f527
    PUSH EDI                            ; 0056f52b
    PUSH EBX                            ; 0056f52c
    CALL support_trisock.cpp_buildIPAddress_FUN_0056f630 ; 0056f52d
        ;   XREF to: 0056f630 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_0056f630()
    ADD ESP,0x14                        ; 0056f532
    TEST EAX,EAX                        ; 0056f535
    JZ 0x0056f540                       ; 0056f537
        ;   XREF to: 0056f540 (CONDITIONAL_JUMP)  ; LAB_0056f540
    MOV EAX,EBX                         ; 0056f539
    POP EBP                             ; 0056f53b
    POP EDI                             ; 0056f53c
    POP ESI                             ; 0056f53d
    POP EBX                             ; 0056f53e
    RET                                 ; 0056f53f
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056f540
        ;   Label: LAB_0056f540
    PUSH EDX                            ; 0056f544
    MOV ECX,dword ptr [ESP + 0x24]      ; 0056f545
    PUSH ECX                            ; 0056f549
    PUSH ESI                            ; 0056f54a
    PUSH EDI                            ; 0056f54b
    MOV EBP,0x5d684c                    ; 0056f54c
    MOV EAX,0x62                        ; 0056f551
    PUSH 0x5d6863                       ; 0056f556
    MOV dword ptr [0x01d71de0],EBP      ; 0056f55b | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0056f561 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056f566
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x14                        ; 0056f56b
    MOV EAX,EBX                         ; 0056f56e
    POP EBP                             ; 0056f570
    POP EDI                             ; 0056f571
    POP ESI                             ; 0056f572
    POP EBX                             ; 0056f573
    RET                                 ; 0056f574

