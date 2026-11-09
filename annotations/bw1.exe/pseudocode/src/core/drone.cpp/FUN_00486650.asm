; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_drone_cpp_FUN_00486650(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486650
        ;   Label: core_drone.cpp_FUN_00486650
    PUSH ESI                            ; 00486651
    PUSH EDI                            ; 00486652
    SUB ESP,0x18                        ; 00486653
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00486656
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048665a
    PUSH 0x0                            ; 0048665e
    ADD EAX,0x158                       ; 00486660
    PUSH EAX                            ; 00486665
    LEA ESI,[ESP + 0x8]                 ; 00486666
    LEA EDI,[ESP + 0x14]                ; 0048666a
    CALL core_skeleton.cpp_FUN_00569130 ; 0048666e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 00486673
    ADD ESP,0x8                         ; 00486677
    LEA EAX,[ESP + 0xc]                 ; 0048667a
    MOVSD ES:EDI,ESI                    ; 0048667e
    MOVSD ES:EDI,ESI                    ; 0048667f
    MOVSD ES:EDI,ESI                    ; 00486680
    CMP EBX,EAX                         ; 00486681
    JNZ 0x00486691                      ; 00486683
        ;   XREF to: 00486691 (CONDITIONAL_JUMP)  ; LAB_00486691
    MOV EAX,0x1                         ; 00486685
    ADD ESP,0x18                        ; 0048668a
    POP EDI                             ; 0048668d
    POP ESI                             ; 0048668e
    POP EBX                             ; 0048668f
    RET                                 ; 00486690
    MOV EAX,dword ptr [ESP + 0xc]       ; 00486691
        ;   Label: LAB_00486691
    MOV dword ptr [EBX],EAX             ; 00486695
    MOV EAX,dword ptr [ESP + 0x10]      ; 00486697
    MOV dword ptr [EBX + 0x4],EAX       ; 0048669b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048669e
    MOV dword ptr [EBX + 0x8],EAX       ; 004866a2
    MOV EAX,0x1                         ; 004866a5
    ADD ESP,0x18                        ; 004866aa
    POP EDI                             ; 004866ad
    POP ESI                             ; 004866ae
    POP EBX                             ; 004866af
    RET                                 ; 004866b0

