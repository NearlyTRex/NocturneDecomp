; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0044c190(CDemonFilter *this_ptr,float init_value,int flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   init_value
; int              Stack[0xc]:4   flags
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 at 0044be0e
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c8cc4
;
; Referenced Globals:
;   double DOUBLE_0057c05d = 256
;   double DOUBLE_0057c065 = 0.25
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c190
        ;   Label: core_dfilter.cpp_CDemonFilter_init_FUN_0044c190
    PUSH ESI                            ; 0044c191
    PUSH EDI                            ; 0044c192
    PUSH EBP                            ; 0044c193
    MOV EBP,ESP                         ; 0044c194
    SUB ESP,0x14                        ; 0044c196
    AND ESP,0xfffffff8                  ; 0044c199
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044c19c
    CMP dword ptr [EBP + 0x1c],0x0      ; 0044c19f
    JZ 0x0044c277                       ; 0044c1a3
        ;   XREF to: 0044c277 (CONDITIONAL_JUMP)  ; LAB_0044c277
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044c1a9
        ;   Label: LAB_0044c1a9
    XOR EDI,EDI                         ; 0044c1ac
    TEST ECX,ECX                        ; 0044c1ae
    JLE 0x0044c270                      ; 0044c1b0
        ;   XREF to: 0044c270 (CONDITIONAL_JUMP)  ; LAB_0044c270
    MOV EAX,dword ptr [EBX]             ; 0044c1b6
        ;   Label: LAB_0044c1b6
    XOR ECX,ECX                         ; 0044c1b8
    TEST EAX,EAX                        ; 0044c1ba
    JLE 0x0044c266                      ; 0044c1bc
        ;   XREF to: 0044c266 (CONDITIONAL_JUMP)  ; LAB_0044c266
    MOV EAX,dword ptr [EBX]             ; 0044c1c2
        ;   Label: LAB_0044c1c2
    MOV EDX,EAX                         ; 0044c1c4
    SAR EDX,0x1f                        ; 0044c1c6
    SUB EAX,EDX                         ; 0044c1c9
    SAR EAX,0x1                         ; 0044c1cb
    MOV ESI,EAX                         ; 0044c1cd
    SUB EAX,ECX                         ; 0044c1cf
    MOV dword ptr [ESP + 0xc],EAX       ; 0044c1d1
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044c1d5
    MOV EDX,EAX                         ; 0044c1d8
    SAR EDX,0x1f                        ; 0044c1da
    SUB EAX,EDX                         ; 0044c1dd
    SAR EAX,0x1                         ; 0044c1df
    FILD dword ptr [ESP + 0xc]          ; 0044c1e1
    FMUL ST0                            ; 0044c1e5
    SUB EAX,EDI                         ; 0044c1e7
    MOV dword ptr [ESP + 0xc],EAX       ; 0044c1e9
    FILD dword ptr [ESP + 0xc]          ; 0044c1ed
    FMUL ST0                            ; 0044c1f1
    FADDP                               ; 0044c1f3
    FSQRT                               ; 0044c1f5
    MOV dword ptr [ESP + 0xc],ESI       ; 0044c1f7
    FILD dword ptr [ESP + 0xc]          ; 0044c1fb
    FXCH                                ; 0044c1ff
    FSTP float ptr [ESP]                ; 0044c201
    FDIVR float ptr [ESP]               ; 0044c204
    FST float ptr [ESP]                 ; 0044c207
    FLD1                                ; 0044c20a
    FCOMPP                              ; 0044c20c
    FNSTSW AX                           ; 0044c20e
    SAHF                                ; 0044c210
    JC 0x0044c285                       ; 0044c211
        ;   XREF to: 0044c285 (CONDITIONAL_JUMP)  ; LAB_0044c285
    FLD float ptr [ESP]                 ; 0044c213
        ;   Label: LAB_0044c213
    FLD1                                ; 0044c216
    FSUBRP                              ; 0044c218
    FMUL float ptr [EBP + 0x18]         ; 0044c21a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044c21d
    FSTP float ptr [ESP]                ; 0044c220
    TEST EDX,EDX                        ; 0044c223
    JNZ 0x0044c28e                      ; 0044c225
        ;   XREF to: 0044c28e (CONDITIONAL_JUMP)  ; LAB_0044c28e
    FLD float ptr [ESP]                 ; 0044c227
    FMUL double ptr [0x0057c05d]        ; 0044c22a | DOUBLE_0057c05d
    FMUL double ptr [0x0057c065]        ; 0044c230 | DOUBLE_0057c065
    CALL crt_math.c_round_FUN_00563a30  ; 0044c236
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
        ;   Label: LAB_0044c236
    FISTP dword ptr [ESP + 0xc]         ; 0044c23b
    MOV AL,byte ptr [ESP + 0xc]         ; 0044c23f
    MOVZX ESI,AL                        ; 0044c243
    CMP ESI,0x3f                        ; 0044c246
    JLE 0x0044c24d                      ; 0044c249
        ;   XREF to: 0044c24d (CONDITIONAL_JUMP)  ; LAB_0044c24d
    MOV AL,0x3f                         ; 0044c24b
    MOV ESI,dword ptr [EBX]             ; 0044c24d
        ;   Label: LAB_0044c24d
    IMUL ESI,EDI                        ; 0044c24f
    MOV EDX,dword ptr [EBX + 0x48]      ; 0044c252
    ADD ESI,ECX                         ; 0044c255
    ADD ESI,EDX                         ; 0044c257
    MOV byte ptr [ESI],AL               ; 0044c259
    INC ECX                             ; 0044c25b
    MOV ESI,dword ptr [EBX]             ; 0044c25c
    CMP ECX,ESI                         ; 0044c25e
    JL 0x0044c1c2                       ; 0044c260
        ;   XREF to: 0044c1c2 (CONDITIONAL_JUMP)  ; LAB_0044c1c2
    INC EDI                             ; 0044c266
        ;   Label: LAB_0044c266
    CMP EDI,dword ptr [EBX + 0x4]       ; 0044c267
    JL 0x0044c1b6                       ; 0044c26a
        ;   XREF to: 0044c1b6 (CONDITIONAL_JUMP)  ; LAB_0044c1b6
    MOV ESP,EBP                         ; 0044c270
        ;   Label: LAB_0044c270
    POP EBP                             ; 0044c272
    POP EDI                             ; 0044c273
    POP ESI                             ; 0044c274
    POP EBX                             ; 0044c275
    RET                                 ; 0044c276
    PUSH EBX                            ; 0044c277
        ;   Label: LAB_0044c277
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20 ; 0044c278
        ;   XREF to: 0044bf20 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 0044c27d
    JMP 0x0044c1a9                      ; 0044c280
        ;   XREF to: 0044c1a9 (UNCONDITIONAL_JUMP)  ; LAB_0044c1a9
    MOV dword ptr [ESP],0x3f800000      ; 0044c285
        ;   Label: LAB_0044c285
    JMP 0x0044c213                      ; 0044c28c
        ;   XREF to: 0044c213 (UNCONDITIONAL_JUMP)  ; LAB_0044c213
    MOV EAX,dword ptr [EBX]             ; 0044c28e
        ;   Label: LAB_0044c28e
    IMUL EAX,EDI                        ; 0044c290
    MOV ESI,dword ptr [EBX + 0x48]      ; 0044c293
    ADD EAX,ECX                         ; 0044c296
    ADD ESI,EAX                         ; 0044c298
    XOR EAX,EAX                         ; 0044c29a
    MOV AL,byte ptr [ESI]               ; 0044c29c
    MOV dword ptr [ESP + 0x10],EAX      ; 0044c29e
    FILD word ptr [ESP + 0x10]          ; 0044c2a2
    FMUL float ptr [ESP]                ; 0044c2a6
    JMP 0x0044c236                      ; 0044c2a9
        ;   XREF to: 0044c236 (UNCONDITIONAL_JUMP)  ; LAB_0044c236

