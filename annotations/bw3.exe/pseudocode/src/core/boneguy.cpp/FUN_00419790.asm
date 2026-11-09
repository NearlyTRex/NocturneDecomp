; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_FUN_00419790(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_baal.cpp_FUN_005968a0 at 00596ce9
;   core_boneguy.cpp_FUN_004179b0 at 00417a9b
;
; Referenced Globals:
;   TerminatedCString s_boneguy_comeback_wav_005b716d
;
; Called Functions:
;   core_xform.cpp_FUN_005860b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419790
        ;   Label: core_boneguy.cpp_FUN_00419790
    PUSH ESI                            ; 00419791
    PUSH EDI                            ; 00419792
    PUSH EBP                            ; 00419793
    SUB ESP,0x14                        ; 00419794
    MOV EAX,dword ptr [ESP + 0x28]      ; 00419797
    XOR EDX,EDX                         ; 0041979b
    MOV ECX,dword ptr [EAX + 0xd0e8]    ; 0041979d
    MOV dword ptr [ESP + 0x10],EDX      ; 004197a3
    TEST ECX,ECX                        ; 004197a7
    JLE 0x00419828                      ; 004197a9
        ;   XREF to: 00419828 (CONDITIONAL_JUMP)  ; LAB_00419828
    LEA EBP,[EAX + 0xd128]              ; 004197af
    MOV EBX,EAX                         ; 004197b5
    MOV EAX,dword ptr [EBX + 0xd134]    ; 004197b7
        ;   Label: LAB_004197b7
    ADD EAX,0x30                        ; 004197bd
    PUSH EAX                            ; 004197c0
    LEA ESI,[ESP + 0x4]                 ; 004197c1
    CALL core_xform.cpp_FUN_005860b0    ; 004197c5
        ;   XREF to: 005860b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005860b0()
    LEA ESI,[ESP + 0x4]                 ; 004197ca
    LEA EDI,[EBX + 0xd108]              ; 004197ce
    ADD ESP,0x4                         ; 004197d4
    MOVSD ES:EDI,ESI                    ; 004197d7
    MOVSD ES:EDI,ESI                    ; 004197d8
    MOVSD ES:EDI,ESI                    ; 004197d9
    MOVSD ES:EDI,ESI                    ; 004197da
    MOV EAX,dword ptr [EBX + 0xd134]    ; 004197db
    MOV dword ptr [EAX + 0xf24],0x0     ; 004197e1
    MOV EAX,dword ptr [EBX + 0xd134]    ; 004197eb
    ADD EAX,0x20                        ; 004197f1
    CMP EBP,EAX                         ; 004197f4
    JZ 0x00419809                       ; 004197f6
        ;   XREF to: 00419809 (CONDITIONAL_JUMP)  ; LAB_00419809
    MOV EDX,dword ptr [EAX]             ; 004197f8
    MOV dword ptr [EBP],EDX             ; 004197fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 004197fd
    MOV dword ptr [EBP + 0x4],EDX       ; 00419800
    MOV EDX,dword ptr [EAX + 0x8]       ; 00419803
    MOV dword ptr [EBP + 0x8],EDX       ; 00419806
    MOV ESI,dword ptr [ESP + 0x10]      ; 00419809
        ;   Label: LAB_00419809
    INC ESI                             ; 0041980d
    MOV dword ptr [ESP + 0x10],ESI      ; 0041980e
    MOV EAX,ESI                         ; 00419812
    MOV ESI,dword ptr [ESP + 0x28]      ; 00419814
    ADD EBP,0x48                        ; 00419818
    MOV EDI,dword ptr [ESI + 0xd0e8]    ; 0041981b
    ADD EBX,0x48                        ; 00419821
    CMP EAX,EDI                         ; 00419824
    JL 0x004197b7                       ; 00419826
        ;   XREF to: 004197b7 (CONDITIONAL_JUMP)  ; LAB_004197b7
    MOV EAX,dword ptr [ESP + 0x28]      ; 00419828
        ;   Label: LAB_00419828
    PUSH 0x5b716d                       ; 0041982c | = "boneguy-comeback.wav"
    MOV dword ptr [EAX + 0xd0e4],0x2    ; 00419831
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0041983b
    MOV dword ptr [EAX + 0xd694],0x0    ; 0041983f
    PUSH EBP                            ; 00419849
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041984a
    CALL dword ptr [EAX + 0x2c]         ; 00419850
    ADD ESP,0x8                         ; 00419853
    ADD ESP,0x14                        ; 00419856
    POP EBP                             ; 00419859
    POP EDI                             ; 0041985a
    POP ESI                             ; 0041985b
    POP EBX                             ; 0041985c
    RET                                 ; 0041985d

