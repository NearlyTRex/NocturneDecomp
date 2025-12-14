; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double core_dmodel.cpp_safeAcos_FUN_0047b170(float value)
;
; Parameters:
; float            Stack[0x8]:4   value
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_0062044b = -1
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b170
        ;   Label: core_dmodel.cpp_safeAcos_FUN_0047b170
    PUSH EBP                            ; 0047b171
    MOV EBP,ESP                         ; 0047b172
    SUB ESP,0x10                        ; 0047b174
    AND ESP,0xfffffff8                  ; 0047b177
    FLD float ptr [EBP + 0xc]           ; 0047b17a
    FLD1                                ; 0047b17d
    FXCH                                ; 0047b17f
    FSTP double ptr [ESP]               ; 0047b181
    FCOMP double ptr [ESP]              ; 0047b184
    FNSTSW AX                           ; 0047b187
    SAHF                                ; 0047b189
    JBE 0x0047b1b9                      ; 0047b18a
        ;   XREF to: 0047b1b9 (CONDITIONAL_JUMP)  ; LAB_0047b1b9
    FLD double ptr [ESP]                ; 0047b18c
    FCOMP double ptr [0x0062044b]       ; 0047b18f | DOUBLE_0062044b
    FNSTSW AX                           ; 0047b195
    SAHF                                ; 0047b197
    JA 0x0047b1c5                       ; 0047b198
        ;   XREF to: 0047b1c5 (CONDITIONAL_JUMP)  ; LAB_0047b1c5
    MOV EDX,0x54411744                  ; 0047b19a
    MOV ECX,0x400921fb                  ; 0047b19f
    MOV dword ptr [ESP + 0x8],EDX       ; 0047b1a4
    MOV dword ptr [ESP + 0xc],ECX       ; 0047b1a8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047b1ac
        ;   Label: LAB_0047b1ac
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047b1b0
    MOV ESP,EBP                         ; 0047b1b4
    POP EBP                             ; 0047b1b6
    POP EBX                             ; 0047b1b7
    RET                                 ; 0047b1b8
    XOR EBX,EBX                         ; 0047b1b9
        ;   Label: LAB_0047b1b9
    MOV dword ptr [ESP + 0x8],EBX       ; 0047b1bb
    MOV dword ptr [ESP + 0xc],EBX       ; 0047b1bf
    JMP 0x0047b1ac                      ; 0047b1c3
        ;   XREF to: 0047b1ac (UNCONDITIONAL_JUMP)  ; LAB_0047b1ac
    FLD double ptr [ESP]                ; 0047b1c5
        ;   Label: LAB_0047b1c5
    CALL crt_math.c_acos_FUN_00600162   ; 0047b1c8
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP double ptr [ESP + 0x8]         ; 0047b1cd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047b1d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047b1d5
    MOV ESP,EBP                         ; 0047b1d9
    POP EBP                             ; 0047b1db
    POP EBX                             ; 0047b1dc
    RET                                 ; 0047b1dd

