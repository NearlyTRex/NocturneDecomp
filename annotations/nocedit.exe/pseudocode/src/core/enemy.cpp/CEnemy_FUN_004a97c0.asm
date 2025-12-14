; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_enemy.cpp_CEnemy_FUN_004a97c0(CEnemy * this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   float FLOAT_0062437e = 0.5
;   double DOUBLE_00624382 = 0.300000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a97c0
        ;   Label: core_enemy.cpp_CEnemy_FUN_004a97c0
    PUSH EBP                            ; 004a97c1
    MOV EBP,ESP                         ; 004a97c2
    SUB ESP,0x38                        ; 004a97c4
    AND ESP,0xfffffff8                  ; 004a97c7
    MOV ECX,dword ptr [EBP + 0xc]       ; 004a97ca
    MOV EBX,dword ptr [EBP + 0x10]      ; 004a97cd
    MOV EAX,ESP                         ; 004a97d0
    PUSH EAX                            ; 004a97d2
    MOV EDX,dword ptr [ECX + 0x154]     ; 004a97d3
    PUSH ECX                            ; 004a97d9
    CALL dword ptr [EDX + 0x14]         ; 004a97da
    ADD ESP,0x8                         ; 004a97dd
    FLD float ptr [ESP]                 ; 004a97e0
    FLD float ptr [ESP + 0x10]          ; 004a97e3
    FSUB float ptr [ESP + 0x4]          ; 004a97e7
    FXCH                                ; 004a97eb
    FADD float ptr [ESP + 0xc]          ; 004a97ed
    FXCH                                ; 004a97f1
    FMUL double ptr [0x00624382]        ; 004a97f3 | DOUBLE_00624382
    FXCH                                ; 004a97f9
    FST float ptr [ESP + 0x24]          ; 004a97fb
    FLD float ptr [0x0062437e]          ; 004a97ff | FLOAT_0062437e
    FXCH                                ; 004a9805
    FMUL ST1                            ; 004a9807
    FLD float ptr [ESP + 0x8]           ; 004a9809
    FLD float ptr [ESP + 0x4]           ; 004a980d
    FADD float ptr [ESP + 0x10]         ; 004a9811
    FXCH                                ; 004a9815
    FADD float ptr [ESP + 0x14]         ; 004a9817
    FXCH                                ; 004a981b
    FST float ptr [ESP + 0x28]          ; 004a981d
    FMUL ST3                            ; 004a9821
    FXCH                                ; 004a9823
    FST float ptr [ESP + 0x2c]          ; 004a9825
    FMULP ST3                           ; 004a9829
    LEA EAX,[ESP + 0x18]                ; 004a982b
    FXCH                                ; 004a982f
    FSTP float ptr [ESP + 0x18]         ; 004a9831
    FXCH ST2                            ; 004a9835
    FADD ST0,ST2                        ; 004a9837
    FXCH                                ; 004a9839
    FSTP float ptr [ESP + 0x20]         ; 004a983b
    FSTP ST1                            ; 004a983f
    FSTP float ptr [ESP + 0x1c]         ; 004a9841
    CMP EBX,EAX                         ; 004a9845
    JNZ 0x004a9853                      ; 004a9847
        ;   XREF to: 004a9853 (CONDITIONAL_JUMP)  ; LAB_004a9853
    MOV EAX,0x1                         ; 004a9849
    MOV ESP,EBP                         ; 004a984e
    POP EBP                             ; 004a9850
    POP EBX                             ; 004a9851
    RET                                 ; 004a9852
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a9853
        ;   Label: LAB_004a9853
    MOV dword ptr [EBX],EAX             ; 004a9857
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a9859
    MOV dword ptr [EBX + 0x4],EAX       ; 004a985d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a9860
    MOV dword ptr [EBX + 0x8],EAX       ; 004a9864
    MOV EAX,0x1                         ; 004a9867
    MOV ESP,EBP                         ; 004a986c
    POP EBP                             ; 004a986e
    POP EBX                             ; 004a986f
    RET                                 ; 004a9870

