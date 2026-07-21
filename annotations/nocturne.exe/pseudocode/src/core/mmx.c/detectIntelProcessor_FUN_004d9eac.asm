; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl core_mmx_c_detectIntelProcessor_FUN_004d9eac(void)
;
;
; XREF[2]:
;   core_mmx.c_detectCPUFeatures_FUN_004d9e70 at 004d9e71
;   core_mmx.c_getCPUInfo_FUN_004d9f6f at 004d9f80
;
; Referenced Globals:
;   string s_GenuineIntel_005bb100
;   undefined4 s__005bb100+0xc
;   undefined4 DAT_005bb110
;   undefined4 DAT_005bb114
;   undefined1 DAT_005bb118
;   undefined4 DAT_005bb119
;   undefined4 DAT_005bb11a
;   undefined4 DAT_005bb11b
;   undefined1 DAT_005bb11c
;   undefined4 DAT_005bb11d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d9eac
        ;   Label: core_mmx.c_detectIntelProcessor_FUN_004d9eac
    PUSH EDI                            ; 004d9ead
    PUSH EAX                            ; 004d9eae
    PUSH EBX                            ; 004d9eaf
    PUSH ECX                            ; 004d9eb0
    PUSH EDX                            ; 004d9eb1
    PUSHFD                              ; 004d9eb2
    POP EAX                             ; 004d9eb3
    MOV ECX,EAX                         ; 004d9eb4
    XOR EAX,0x40000                     ; 004d9eb6
    PUSH EAX                            ; 004d9ebb
    POPFD                               ; 004d9ebc
    PUSHFD                              ; 004d9ebd
    POP EAX                             ; 004d9ebe
    XOR EAX,ECX                         ; 004d9ebf
    MOV byte ptr [0x005bb118],0x3       ; 004d9ec1 | DAT_005bb118
    JZ 0x004d9f52                       ; 004d9ec8
        ;   XREF to: 004d9f52 (CONDITIONAL_JUMP)  ; LAB_004d9f52
    PUSH ECX                            ; 004d9ece
    POPFD                               ; 004d9ecf
    MOV byte ptr [0x005bb118],0x4       ; 004d9ed0 | DAT_005bb118
    MOV EAX,ECX                         ; 004d9ed7
    XOR EAX,0x200000                    ; 004d9ed9
    PUSH EAX                            ; 004d9ede
    POPFD                               ; 004d9edf
    PUSHFD                              ; 004d9ee0
    POP EAX                             ; 004d9ee1
    XOR EAX,ECX                         ; 004d9ee2
    JZ 0x004d9f52                       ; 004d9ee4
        ;   XREF to: 004d9f52 (CONDITIONAL_JUMP)  ; LAB_004d9f52
    MOV byte ptr [0x005bb11b],0x1       ; 004d9ee6 | DAT_005bb11b
    XOR EAX,EAX                         ; 004d9eed
    CPUID                               ; 004d9eef
    MOV dword ptr [0x005bb10c],EBX      ; 004d9ef1 | s__005bb100+0xc
    MOV dword ptr [0x005bb110],EDX      ; 004d9ef7 | DAT_005bb110
    MOV dword ptr [0x005bb114],ECX      ; 004d9efd | DAT_005bb114
    MOV ESI,0x5bb10c                    ; 004d9f03 | s__005bb100+0xc
    MOV EDI,0x5bb100                    ; 004d9f08 | = "GenuineIntel"
    MOV ECX,0x1                         ; 004d9f0d
    CMPSB.REPE ES:EDI,ESI               ; 004d9f12 | = "GenuineIntel" | s__005bb100+0xc
    OR ECX,ECX                          ; 004d9f14
    JNZ 0x004d9f52                      ; 004d9f16
        ;   XREF to: 004d9f52 (CONDITIONAL_JUMP)  ; LAB_004d9f52
    MOV byte ptr [0x005bb11c],0x1       ; 004d9f18 | DAT_005bb11c
    CMP EAX,0x1                         ; 004d9f1f
    JL 0x004d9f52                       ; 004d9f22
        ;   XREF to: 004d9f52 (CONDITIONAL_JUMP)  ; LAB_004d9f52
    XOR EAX,EAX                         ; 004d9f24
    INC EAX                             ; 004d9f26
    CPUID                               ; 004d9f27
    MOV [0x005bb11a],AL                 ; 004d9f29 | DAT_005bb11a
    AND byte ptr [0x005bb11a],0xf       ; 004d9f2e | DAT_005bb11a
    AND AL,0xf0                         ; 004d9f35
    SHR AL,0x4                          ; 004d9f37
    MOV [0x005bb119],AL                 ; 004d9f3a | DAT_005bb119
    AND EAX,0xf00                       ; 004d9f3f
    SHR EAX,0x8                         ; 004d9f44
    MOV [0x005bb118],AL                 ; 004d9f47 | DAT_005bb118
    MOV dword ptr [0x005bb11d],EDX      ; 004d9f4c | DAT_005bb11d
    POP EDX                             ; 004d9f52
        ;   Label: LAB_004d9f52
    POP ECX                             ; 004d9f53
    POP EBX                             ; 004d9f54
    POP EAX                             ; 004d9f55
    POP EDI                             ; 004d9f56
    POP ESI                             ; 004d9f57
    RET                                 ; 004d9f58

