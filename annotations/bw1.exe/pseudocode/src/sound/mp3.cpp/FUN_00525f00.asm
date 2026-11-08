; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00525f00(int param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_00525fe0 at 00525fe7
;   FUN_005260e0 at 005262db
;   FUN_00527ab0 at 00527b8c
;   FUN_00527e80 at 005281ef
;   FUN_00528410 at 00528acc
;   FUN_0052b450 at 0052ba80
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb1b4
;   TerminatedCString s_Buffer_overflow_File_s_005eb1c5
;   undefined4 DAT_006206b0
;   undefined4 DAT_006206d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525f00
        ;   Label: FUN_00525f00
    PUSH ESI                            ; 00525f01
    PUSH EDI                            ; 00525f02
    PUSH EBP                            ; 00525f03
    SUB ESP,0x4                         ; 00525f04
    MOV EBX,dword ptr [ESP + 0x18]      ; 00525f07
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00525f0b
    MOV EDX,dword ptr [EBX + 0x1314]    ; 00525f0f
    MOV ESI,EAX                         ; 00525f15
    ADD EDX,EAX                         ; 00525f17
    XOR EDI,EDI                         ; 00525f19
    MOV dword ptr [EBX + 0x1314],EDX    ; 00525f1b
    TEST EAX,EAX                        ; 00525f21
    JLE 0x00525f81                      ; 00525f23
        ;   XREF to: 00525f81 (CONDITIONAL_JUMP)  ; LAB_00525f81
    CMP dword ptr [EBX + 0x531c],0x0    ; 00525f25
        ;   Label: LAB_00525f25
    JZ 0x00525f8b                       ; 00525f2c
        ;   XREF to: 00525f8b (CONDITIONAL_JUMP)  ; LAB_00525f8b
    MOV EDX,dword ptr [EBX + 0x531c]    ; 00525f2e
        ;   Label: LAB_00525f2e
    CMP ESI,EDX                         ; 00525f34
    JNC 0x00525fd8                      ; 00525f36
        ;   XREF to: 00525fd8 (CONDITIONAL_JUMP)  ; LAB_00525fd8
    MOV EAX,ESI                         ; 00525f3c
    MOV EDX,dword ptr [EBX + 0x1318]    ; 00525f3e
        ;   Label: LAB_00525f3e
    MOV ECX,dword ptr [EBX + 0x531c]    ; 00525f44
    SUB ESI,EAX                         ; 00525f4a
    AND EDX,0xfff                       ; 00525f4c
    MOV EBP,dword ptr [ECX*0x4 + 0x6206b0] ; 00525f52 | DAT_006206b0 | DAT_006206d0
    SUB ECX,EAX                         ; 00525f59
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x131c] ; 00525f5b
    MOV dword ptr [ESP],ECX             ; 00525f62
    AND EDX,EBP                         ; 00525f65
    MOV CL,byte ptr [ESP]               ; 00525f67
    MOV EAX,ESI                         ; 00525f6a
    SHR EDX,CL                          ; 00525f6c
    MOV CL,AL                           ; 00525f6e
    SHL EDX,CL                          ; 00525f70
    OR EDI,EDX                          ; 00525f72
    MOV EDX,dword ptr [ESP]             ; 00525f74
    MOV dword ptr [EBX + 0x531c],EDX    ; 00525f77
    TEST ESI,ESI                        ; 00525f7d
    JG 0x00525f25                       ; 00525f7f
        ;   XREF to: 00525f25 (CONDITIONAL_JUMP)  ; LAB_00525f25
    MOV EAX,EDI                         ; 00525f81
        ;   Label: LAB_00525f81
    ADD ESP,0x4                         ; 00525f83
    POP EBP                             ; 00525f86
    POP EDI                             ; 00525f87
    POP ESI                             ; 00525f88
    POP EBX                             ; 00525f89
    RET                                 ; 00525f8a
    MOV EDX,dword ptr [EBX + 0x1318]    ; 00525f8b
        ;   Label: LAB_00525f8b
    MOV dword ptr [EBX + 0x531c],0x8    ; 00525f91
    INC EDX                             ; 00525f9b
    MOV ECX,dword ptr [EBX + 0x1310]    ; 00525f9c
    MOV dword ptr [EBX + 0x1318],EDX    ; 00525fa2
    CMP EDX,ECX                         ; 00525fa8
    JBE 0x00525f2e                      ; 00525faa
        ;   XREF to: 00525f2e (CONDITIONAL_JUMP)  ; LAB_00525f2e
    PUSH 0x1d404c8                      ; 00525fac
    MOV EBP,0x5eb1b4                    ; 00525fb1 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x30a                       ; 00525fb6
    PUSH 0x5eb1c5                       ; 00525fbb | = "Buffer overflow!!  File: %s"
    MOV dword ptr [0x01d1d400],EBP      ; 00525fc0 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00525fc6 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00525fcb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00525fd0
    JMP 0x00525f2e                      ; 00525fd3
        ;   XREF to: 00525f2e (UNCONDITIONAL_JUMP)  ; LAB_00525f2e
    MOV EAX,EDX                         ; 00525fd8
        ;   Label: LAB_00525fd8
    JMP 0x00525f3e                      ; 00525fda
        ;   XREF to: 00525f3e (UNCONDITIONAL_JUMP)  ; LAB_00525f3e

