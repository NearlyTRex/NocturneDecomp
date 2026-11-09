; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0057d870(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   unkafter_melee.cpp_FUN_004eada0 at 004eae0b
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d870
        ;   Label: support_trstream.cpp_FUN_0057d870
    SUB ESP,0x4                         ; 0057d871
    LEA EAX,[ESP + 0x14]                ; 0057d874
    MOV dword ptr [ESP],EAX             ; 0057d878
    MOV EAX,ESP                         ; 0057d87b
    PUSH EAX                            ; 0057d87d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057d87e
    PUSH EDX                            ; 0057d882
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057d883
    PUSH ECX                            ; 0057d887
    XOR EBX,EBX                         ; 0057d888
    CALL support_trstream.cpp_FUN_0057d8a0 ; 0057d88a
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d8a0()
    ADD ESP,0xc                         ; 0057d88f
    MOV dword ptr [ESP],EBX             ; 0057d892
    ADD ESP,0x4                         ; 0057d895
    POP EBX                             ; 0057d898
    RET                                 ; 0057d899

