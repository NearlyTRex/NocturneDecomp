; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_005a14c0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   unkafter_melee.cpp_FUN_00509b00 at 00509b6b
;
; Called Functions:
;   support_trstream.cpp_FUN_005a14f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a14c0
        ;   Label: support_trstream.cpp_FUN_005a14c0
    SUB ESP,0x4                         ; 005a14c1
    LEA EAX,[ESP + 0x14]                ; 005a14c4
    MOV dword ptr [ESP],EAX             ; 005a14c8
    MOV EAX,ESP                         ; 005a14cb
    PUSH EAX                            ; 005a14cd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a14ce
    PUSH EDX                            ; 005a14d2
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a14d3
    PUSH ECX                            ; 005a14d7
    XOR EBX,EBX                         ; 005a14d8
    CALL support_trstream.cpp_FUN_005a14f0 ; 005a14da
        ;   XREF to: 005a14f0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a14f0()
    ADD ESP,0xc                         ; 005a14df
    MOV dword ptr [ESP],EBX             ; 005a14e2
    ADD ESP,0x4                         ; 005a14e5
    POP EBX                             ; 005a14e8
    RET                                 ; 005a14e9

