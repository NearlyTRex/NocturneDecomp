; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049e850(CFireEffect *this_ptr,CVector3f *start_point,CVector3f *end_point,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_point
; CVector3f *      Stack[0xc]:4   end_point
; float            Stack[0x10]:4   size
; float            Stack[0x14]:4   alpha
; float            Stack[0x18]:4   lifetime
; SMRGLTextureBasic * Stack[0x1c]:4   texture_ptr
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_FUN_0040f950 at 0040fdab
;
; Referenced Globals:
;   undefined4 DAT_005d582a
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_0049e7f0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e850
        ;   Label: core_fire.cpp_FUN_0049e850
    PUSH ESI                            ; 0049e851
    PUSH EDI                            ; 0049e852
    PUSH EBP                            ; 0049e853
    MOV EBP,ESP                         ; 0049e854
    SUB ESP,0x30                        ; 0049e856
    AND ESP,0xfffffff8                  ; 0049e859
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049e85c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0049e85f
    FLD float ptr [EBX]                 ; 0049e862
    FLD float ptr [EBX + 0x4]           ; 0049e864
    FLD float ptr [EBX + 0x8]           ; 0049e867
    LEA EDI,[ESP + 0x10]                ; 0049e86a
    LEA ESI,[ESP + 0x1c]                ; 0049e86e
    FXCH ST2                            ; 0049e872
    FSUB float ptr [EAX]                ; 0049e874
    FXCH                                ; 0049e876
    FSUB float ptr [EAX + 0x4]          ; 0049e878
    FXCH ST2                            ; 0049e87b
    FSUB float ptr [EAX + 0x8]          ; 0049e87d
    FXCH                                ; 0049e880
    FSTP float ptr [ESP + 0x1c]         ; 0049e882
    FXCH                                ; 0049e886
    FSTP float ptr [ESP + 0x20]         ; 0049e888
    FSTP float ptr [ESP + 0x24]         ; 0049e88c
    MOVSD ES:EDI,ESI                    ; 0049e890
    MOVSD ES:EDI,ESI                    ; 0049e891
    MOVSD ES:EDI,ESI                    ; 0049e892
    FLD float ptr [ESP + 0x14]          ; 0049e893
    FMUL ST0                            ; 0049e897
    FLD float ptr [ESP + 0x10]          ; 0049e899
    FMUL ST0                            ; 0049e89d
    FADDP                               ; 0049e89f
    FLD float ptr [ESP + 0x18]          ; 0049e8a1
    FMUL ST0                            ; 0049e8a5
    FADDP                               ; 0049e8a7
    MOV ESI,EAX                         ; 0049e8a9
    FSQRT                               ; 0049e8ab
    FMUL double ptr [0x005d582a]        ; 0049e8ad | DAT_005d582a
    FDIV float ptr [EBP + 0x20]         ; 0049e8b3
    FLD1                                ; 0049e8b6
    FADDP                               ; 0049e8b8
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049e8ba
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0049e8bf
    MOV EAX,dword ptr [ESP]             ; 0049e8c2
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049e8c5
    FLD float ptr [ESP + 0x10]          ; 0049e8c9
    FILD dword ptr [ESP + 0x2c]         ; 0049e8cd
    FLD1                                ; 0049e8d1
    FDIVRP                              ; 0049e8d3
    FXCH                                ; 0049e8d5
    FMUL ST1                            ; 0049e8d7
    FLD float ptr [ESP + 0x14]          ; 0049e8d9
    FMUL ST2                            ; 0049e8dd
    FLD float ptr [ESP + 0x18]          ; 0049e8df
    FMULP ST3                           ; 0049e8e3
    LEA EDI,[ESP + 0x4]                 ; 0049e8e5
    XOR EBX,EBX                         ; 0049e8e9
    MOVSD ES:EDI,ESI                    ; 0049e8eb
    MOVSD ES:EDI,ESI                    ; 0049e8ec
    MOVSD ES:EDI,ESI                    ; 0049e8ed
    FXCH                                ; 0049e8ee
    FSTP float ptr [ESP + 0x10]         ; 0049e8f0
    FSTP float ptr [ESP + 0x14]         ; 0049e8f4
    FSTP float ptr [ESP + 0x18]         ; 0049e8f8
    TEST EAX,EAX                        ; 0049e8fc
    JLE 0x0049e960                      ; 0049e8fe
        ;   XREF to: 0049e960 (CONDITIONAL_JUMP)  ; LAB_0049e960
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049e900
    MOV EDI,dword ptr [ESP]             ; 0049e903
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0049e906
        ;   Label: LAB_0049e906
    PUSH ECX                            ; 0049e909
    PUSH dword ptr [EBP + 0x28]         ; 0049e90a
    PUSH dword ptr [EBP + 0x24]         ; 0049e90d
    LEA EAX,[ESP + 0x10]                ; 0049e910
    PUSH dword ptr [EBP + 0x20]         ; 0049e914
    PUSH EAX                            ; 0049e917
    PUSH ESI                            ; 0049e918
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_0049e7f0 ; 0049e919
        ;   XREF to: 0049e7f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_0049e7f0(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
    ADD ESP,0x18                        ; 0049e91e
    INC EBX                             ; 0049e921
    FLD float ptr [ESP + 0x4]           ; 0049e922
    FLD float ptr [ESP + 0x8]           ; 0049e926
    FLD float ptr [ESP + 0xc]           ; 0049e92a
    FXCH ST2                            ; 0049e92e
    FADD float ptr [ESP + 0x10]         ; 0049e930
    FXCH                                ; 0049e934
    FADD float ptr [ESP + 0x14]         ; 0049e936
    FXCH ST2                            ; 0049e93a
    FADD float ptr [ESP + 0x18]         ; 0049e93c
    FXCH                                ; 0049e940
    FSTP float ptr [ESP + 0x4]          ; 0049e942
    FXCH                                ; 0049e946
    FSTP float ptr [ESP + 0x8]          ; 0049e948
    FSTP float ptr [ESP + 0xc]          ; 0049e94c
    CMP EBX,EDI                         ; 0049e950
    JL 0x0049e906                       ; 0049e952
        ;   XREF to: 0049e906 (CONDITIONAL_JUMP)  ; LAB_0049e906
    LEA EAX,[EAX]                       ; 0049e954
    LEA EDX,[EDX]                       ; 0049e95a
    MOV ESP,EBP                         ; 0049e960
        ;   Label: LAB_0049e960
    POP EBP                             ; 0049e962
    POP EDI                             ; 0049e963
    POP ESI                             ; 0049e964
    POP EBX                             ; 0049e965
    RET                                 ; 0049e966

