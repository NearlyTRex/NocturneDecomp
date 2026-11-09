; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_005744b0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   unkafter_melee.cpp_FUN_004e7540 at 004e75ab
;
; Called Functions:
;   support_trstream.cpp_FUN_005744e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005744b0
        ;   Label: support_trstream.cpp_FUN_005744b0
    SUB ESP,0x4                         ; 005744b1
    LEA EAX,[ESP + 0x14]                ; 005744b4
    MOV dword ptr [ESP],EAX             ; 005744b8
    MOV EAX,ESP                         ; 005744bb
    PUSH EAX                            ; 005744bd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005744be
    PUSH EDX                            ; 005744c2
    MOV ECX,dword ptr [ESP + 0x14]      ; 005744c3
    PUSH ECX                            ; 005744c7
    XOR EBX,EBX                         ; 005744c8
    CALL support_trstream.cpp_FUN_005744e0 ; 005744ca
        ;   XREF to: 005744e0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005744e0()
    ADD ESP,0xc                         ; 005744cf
    MOV dword ptr [ESP],EBX             ; 005744d2
    ADD ESP,0x4                         ; 005744d5
    POP EBX                             ; 005744d8
    RET                                 ; 005744d9

