; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0045db40(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 004515d1
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045db40
        ;   Label: core_doc.cpp_FUN_0045db40
    PUSH ESI                            ; 0045db41
    PUSH EDI                            ; 0045db42
    SUB ESP,0x18                        ; 0045db43
    MOV EBX,dword ptr [ESP + 0x28]      ; 0045db46
    CMP dword ptr [EBX + 0x2d0c],0x1    ; 0045db4a
    JGE 0x0045db5a                      ; 0045db51
        ;   XREF to: 0045db5a (CONDITIONAL_JUMP)  ; LAB_0045db5a
    ADD ESP,0x18                        ; 0045db53
        ;   Label: LAB_0045db53
    POP EDI                             ; 0045db56
    POP ESI                             ; 0045db57
    POP EBX                             ; 0045db58
    RET                                 ; 0045db59
    PUSH EBX                            ; 0045db5a
        ;   Label: LAB_0045db5a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045db5b
    CALL dword ptr [EAX + 0x114]        ; 0045db61
    ADD ESP,0x4                         ; 0045db67
    ADD EBX,0x2b4                       ; 0045db6a
    PUSH EBX                            ; 0045db70
    MOV ESI,dword ptr [EBX + 0x2bec]    ; 0045db71
    CALL core_motion.cpp_FUN_005035c0   ; 0045db77
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0045db7c
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045db7f
    LEA EDX,[ESI + 0x3ab24]             ; 0045db82
    CMP EAX,0x2c                        ; 0045db88
    JNZ 0x0045dbbb                      ; 0045db8b
        ;   XREF to: 0045dbbb (CONDITIONAL_JUMP)  ; LAB_0045dbbb
    XOR EDI,EDI                         ; 0045db8d
    MOV EAX,0xc1a00000                  ; 0045db8f
    MOV dword ptr [ESP + 0x10],EDI      ; 0045db94
    MOV dword ptr [ESP + 0x14],EAX      ; 0045db98
    LEA EAX,[ESP + 0xc]                 ; 0045db9c
    MOV dword ptr [ESP + 0xc],EDI       ; 0045dba0
    CMP EDX,EAX                         ; 0045dba4
    JZ 0x0045db53                       ; 0045dba6
        ;   XREF to: 0045db53 (CONDITIONAL_JUMP)  ; LAB_0045db53
    MOV dword ptr [EDX + 0x4],EDI       ; 0045dba8
    MOV dword ptr [EDX],EDI             ; 0045dbab
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045dbad
    MOV dword ptr [EDX + 0x8],EAX       ; 0045dbb1
    ADD ESP,0x18                        ; 0045dbb4
    POP EDI                             ; 0045dbb7
    POP ESI                             ; 0045dbb8
    POP EBX                             ; 0045dbb9
    RET                                 ; 0045dbba
    CMP EAX,0x2d                        ; 0045dbbb
        ;   Label: LAB_0045dbbb
    JNZ 0x0045db53                      ; 0045dbbe
        ;   XREF to: 0045db53 (CONDITIONAL_JUMP)  ; LAB_0045db53
    MOV ESI,0x41a00000                  ; 0045dbc0
    XOR ECX,ECX                         ; 0045dbc5
    MOV EAX,ESP                         ; 0045dbc7
    MOV dword ptr [ESP + 0x4],ECX       ; 0045dbc9
    MOV dword ptr [ESP + 0x8],ESI       ; 0045dbcd
    MOV dword ptr [ESP],ECX             ; 0045dbd1
    CMP EDX,EAX                         ; 0045dbd4
    JZ 0x0045db53                       ; 0045dbd6
        ;   XREF to: 0045db53 (CONDITIONAL_JUMP)  ; LAB_0045db53
    MOV dword ptr [EDX + 0x4],ECX       ; 0045dbdc
    MOV dword ptr [EDX],ECX             ; 0045dbdf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045dbe1
    MOV dword ptr [EDX + 0x8],EAX       ; 0045dbe5
    ADD ESP,0x18                        ; 0045dbe8
    POP EDI                             ; 0045dbeb
    POP ESI                             ; 0045dbec
    POP EBX                             ; 0045dbed
    RET                                 ; 0045dbee

