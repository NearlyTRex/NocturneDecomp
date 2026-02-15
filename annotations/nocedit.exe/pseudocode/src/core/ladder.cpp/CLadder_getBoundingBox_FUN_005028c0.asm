; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_ladder_cpp_CLadder_getBoundingBox_FUN_005028c0(CLadder *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_00630e28 = 0.5
;   double DOUBLE_00630e30 = 0.100000000000000
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005028c0
        ;   Label: core_ladder.cpp_CLadder_getBoundingBox_FUN_005028c0
    PUSH ESI                            ; 005028c1
    SUB ESP,0x18                        ; 005028c2
    MOV EBX,dword ptr [ESP + 0x24]      ; 005028c5
    MOV ESI,dword ptr [ESP + 0x28]      ; 005028c9
    LEA EAX,[EBX + 0x158]               ; 005028cd
    PUSH EAX                            ; 005028d3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005028d4
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 005028d9
    ADD ESP,0x4                         ; 005028df
    CMP EDX,0x1                         ; 005028e2
    JGE 0x0050296f                      ; 005028e5
        ;   XREF to: 0050296f (CONDITIONAL_JUMP)  ; LAB_0050296f
    FLD float ptr [EBX + 0x2d4]         ; 005028eb
    MOV ECX,0xbdcccccd                  ; 005028f1
    FCHS                                ; 005028f6
    FLD double ptr [0x00630e28]         ; 005028f8 | DOUBLE_00630e28
    FXCH                                ; 005028fe
    FMUL ST1                            ; 00502900
    MOV dword ptr [ESP + 0x4],ECX       ; 00502902
    FSTP float ptr [ESP]                ; 00502906
    FLD float ptr [EBX + 0x2dc]         ; 00502909
    FCHS                                ; 0050290f
    FMUL ST1                            ; 00502911
    FSTP float ptr [ESP + 0x8]          ; 00502913
    FLD float ptr [EBX + 0x2d4]         ; 00502917
    FMUL ST1                            ; 0050291d
    FSTP float ptr [ESP + 0xc]          ; 0050291f
    FLD float ptr [EBX + 0x2d8]         ; 00502923
    FADD double ptr [0x00630e30]        ; 00502929 | DOUBLE_00630e30
    FSTP float ptr [ESP + 0x10]         ; 0050292f
    FMUL float ptr [EBX + 0x2dc]        ; 00502933
    MOV EAX,dword ptr [ESP]             ; 00502939
    FSTP float ptr [ESP + 0x14]         ; 0050293c
    MOV dword ptr [ESI],EAX             ; 00502940
    LEA EBX,[ESI + 0x4]                 ; 00502942
    MOV EAX,dword ptr [ESP + 0x4]       ; 00502945
    MOV dword ptr [EBX],EAX             ; 00502949
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050294b
    MOV dword ptr [EBX + 0x4],EAX       ; 0050294f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00502952
    MOV dword ptr [EBX + 0x8],EAX       ; 00502956
    MOV EAX,dword ptr [ESP + 0x10]      ; 00502959
    MOV dword ptr [EBX + 0xc],EAX       ; 0050295d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502960
    MOV dword ptr [EBX + 0x10],EAX      ; 00502964
    MOV EAX,ESI                         ; 00502967
    ADD ESP,0x18                        ; 00502969
    POP ESI                             ; 0050296c
    POP EBX                             ; 0050296d
    RET                                 ; 0050296e
    ADD EBX,0x158                       ; 0050296f
        ;   Label: LAB_0050296f
    PUSH EBX                            ; 00502975
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00502976
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5678]    ; 0050297b
    ADD EAX,0x5678                      ; 00502981
    MOV dword ptr [ESI],EDX             ; 00502986
    LEA EDX,[EAX + 0x4]                 ; 00502988
    LEA EBX,[ESI + 0x4]                 ; 0050298b
    MOV EDX,dword ptr [EDX]             ; 0050298e
    MOV dword ptr [EBX],EDX             ; 00502990
    LEA EDX,[EAX + 0x8]                 ; 00502992
    MOV EDX,dword ptr [EDX]             ; 00502995
    MOV dword ptr [EBX + 0x4],EDX       ; 00502997
    MOV EDX,dword ptr [EAX + 0xc]       ; 0050299a
    ADD EAX,0xc                         ; 0050299d
    MOV dword ptr [EBX + 0x8],EDX       ; 005029a0
    LEA EDX,[EAX + 0x4]                 ; 005029a3
    MOV EDX,dword ptr [EDX]             ; 005029a6
    MOV dword ptr [EBX + 0xc],EDX       ; 005029a8
    MOV EAX,dword ptr [EAX + 0x8]       ; 005029ab
    ADD ESP,0x4                         ; 005029ae
    MOV dword ptr [EBX + 0x10],EAX      ; 005029b1
    MOV EAX,ESI                         ; 005029b4
    ADD ESP,0x18                        ; 005029b6
    POP ESI                             ; 005029b9
    POP EBX                             ; 005029ba
    RET                                 ; 005029bb

