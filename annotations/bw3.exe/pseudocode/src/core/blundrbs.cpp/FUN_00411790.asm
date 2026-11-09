; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_blundrbs_cpp_FUN_00411790(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b654a
;   undefined4 DAT_005b654e
;
; Called Functions:
;   core_weapon.cpp_FUN_0057b820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411790
        ;   Label: core_blundrbs.cpp_FUN_00411790
    PUSH EDI                            ; 00411791
    SUB ESP,0x24                        ; 00411792
    MOV EBX,ESI                         ; 00411795
    MOV EDX,dword ptr [ESP + 0x30]      ; 00411797
    PUSH EDX                            ; 0041179b
    LEA ESI,[ESP + 0x4]                 ; 0041179c
    LEA EDI,[ESP + 0x1c]                ; 004117a0
    CALL core_weapon.cpp_FUN_0057b820   ; 004117a4
        ;   XREF to: 0057b820 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0057b820()
    LEA ESI,[ESP + 0x4]                 ; 004117a9
    ADD ESP,0x4                         ; 004117ad
    MOVSD ES:EDI,ESI                    ; 004117b0
    MOVSD ES:EDI,ESI                    ; 004117b1
    MOVSD ES:EDI,ESI                    ; 004117b2
    LEA EAX,[ESP + 0x18]                ; 004117b3
    LEA ESI,[ESP + 0xc]                 ; 004117b7
    CMP ESI,EAX                         ; 004117bb
    JNZ 0x004117f0                      ; 004117bd
        ;   XREF to: 004117f0 (CONDITIONAL_JUMP)  ; LAB_004117f0
    FLD float ptr [ESP + 0xc]           ; 004117bf
        ;   Label: LAB_004117bf
    FLD float ptr [ESP + 0x10]          ; 004117c3
    LEA ESI,[ESP + 0xc]                 ; 004117c7
    MOV EDI,EBX                         ; 004117cb
    FADD float ptr [0x005b654e]         ; 004117cd | DAT_005b654e
    FXCH                                ; 004117d3
    FADD float ptr [0x005b654a]         ; 004117d5 | DAT_005b654a
    FXCH                                ; 004117db
    FSTP float ptr [ESP + 0x10]         ; 004117dd
    FSTP float ptr [ESP + 0xc]          ; 004117e1
    MOVSD ES:EDI,ESI                    ; 004117e5
    MOVSD ES:EDI,ESI                    ; 004117e6
    MOVSD ES:EDI,ESI                    ; 004117e7
    MOV EAX,EBX                         ; 004117e8
    ADD ESP,0x24                        ; 004117ea
    POP EDI                             ; 004117ed
    POP EBX                             ; 004117ee
    RET                                 ; 004117ef
    MOV EAX,dword ptr [ESP + 0x18]      ; 004117f0
        ;   Label: LAB_004117f0
    MOV dword ptr [ESP + 0xc],EAX       ; 004117f4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004117f8
    MOV dword ptr [ESP + 0x10],EAX      ; 004117fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 00411800
    MOV dword ptr [ESP + 0x14],EAX      ; 00411804
    JMP 0x004117bf                      ; 00411808
        ;   XREF to: 004117bf (UNCONDITIONAL_JUMP)  ; LAB_004117bf

