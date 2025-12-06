; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * direction)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_pos
; CVector3f *      Stack[0xc]:4   direction
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c3150 at 005c324e
;
; Referenced Globals:
;   float g_RaycastStepOffsetScale = 0.005000000
;   float g_RaycastStepSize = 0.1000000
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572800
        ;   Label: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
    PUSH ESI                            ; 00572801
    PUSH EBP                            ; 00572802
    MOV EBP,ESP                         ; 00572803
    SUB ESP,0x7c                        ; 00572805
    AND ESP,0xfffffff8                  ; 00572808
    MOV ESI,dword ptr [EBP + 0x10]      ; 0057280b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057280e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00572811
    MOV EAX,dword ptr [EBX]             ; 00572814
    MOV dword ptr [ESP + 0x18],EAX      ; 00572816
    LEA EAX,[EBX + 0x4]                 ; 0057281a
    MOV EAX,dword ptr [EAX]             ; 0057281d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057281f
    LEA EAX,[EBX + 0x8]                 ; 00572823
    MOV EAX,dword ptr [EAX]             ; 00572826
    MOV dword ptr [ESP + 0x20],EAX      ; 00572828
    MOV EAX,dword ptr [EDX]             ; 0057282c
    MOV dword ptr [ESP + 0x30],EAX      ; 0057282e
    LEA EAX,[EDX + 0x4]                 ; 00572832
    MOV EAX,dword ptr [EAX]             ; 00572835
    MOV dword ptr [ESP + 0x34],EAX      ; 00572837
    LEA EAX,[EDX + 0x8]                 ; 0057283b
    MOV ECX,0xc2000000                  ; 0057283e
    XOR EBX,EBX                         ; 00572843
    MOV EAX,dword ptr [EAX]             ; 00572845
    XOR EDX,EDX                         ; 00572847
    MOV dword ptr [ESP + 0x38],EAX      ; 00572849
    MOV dword ptr [ESP + 0x3c],EDX      ; 0057284d
    MOV dword ptr [ESP + 0x40],ECX      ; 00572851
    MOV dword ptr [ESP + 0x44],EDX      ; 00572855
    MOV dword ptr [ESP + 0x74],EDX      ; 00572859
    FLD float ptr [0x00646256]          ; 0057285d | float g_RaycastStepOffsetScale
        ;   Label: LAB_0057285d
    FLD float ptr [ESP + 0x3c]          ; 00572863
    FMUL ST1                            ; 00572867
    FLD float ptr [ESP + 0x40]          ; 00572869
    FMUL ST2                            ; 0057286d
    FLD float ptr [ESP + 0x44]          ; 0057286f
    FMULP ST3                           ; 00572873
    FLD float ptr [0x0064625a]          ; 00572875 | float g_RaycastStepSize
    FLD float ptr [ESP + 0x30]          ; 0057287b
    FMUL ST1                            ; 0057287f
    FLD float ptr [ESP + 0x34]          ; 00572881
    FMUL ST2                            ; 00572885
    FLD float ptr [ESP + 0x38]          ; 00572887
    FMULP ST3                           ; 0057288b
    MOV EAX,0x3dcccccd                  ; 0057288d
    FLD float ptr [ESP + 0x18]          ; 00572892
    MOV dword ptr [ESP + 0x78],EAX      ; 00572896
    FXCH ST5                            ; 0057289a
    FSTP float ptr [ESP + 0x24]         ; 0057289c
    FLD float ptr [ESP + 0x1c]          ; 005728a0
    FXCH ST4                            ; 005728a4
    FSTP float ptr [ESP + 0x28]         ; 005728a6
    FLD float ptr [ESP + 0x20]          ; 005728aa
    FXCH ST6                            ; 005728ae
    FSTP float ptr [ESP + 0x2c]         ; 005728b0
    FXCH                                ; 005728b4
    FSTP float ptr [ESP + 0x54]         ; 005728b6
    FSTP float ptr [ESP + 0x58]         ; 005728ba
    FSTP float ptr [ESP + 0x5c]         ; 005728be
    LEA EAX,[ESP + 0x60]                ; 005728c2
    FXCH                                ; 005728c6
    FADD float ptr [ESP + 0x54]         ; 005728c8
    FXCH                                ; 005728cc
    FADD float ptr [ESP + 0x58]         ; 005728ce
    FXCH ST2                            ; 005728d2
    FADD float ptr [ESP + 0x5c]         ; 005728d4
    PUSH EAX                            ; 005728d8
    FXCH                                ; 005728d9
    FSTP float ptr [ESP + 0x10]         ; 005728db
    FXCH                                ; 005728df
    FSTP float ptr [ESP + 0x14]         ; 005728e1
    FSTP float ptr [ESP + 0x18]         ; 005728e5
    FLD float ptr [ESP + 0x10]          ; 005728e9
    FLD float ptr [ESP + 0x14]          ; 005728ed
    LEA EAX,[ESP + 0x1c]                ; 005728f1
    FLD float ptr [ESP + 0x18]          ; 005728f5
    PUSH EAX                            ; 005728f9
    FXCH ST2                            ; 005728fa
    FADD float ptr [ESP + 0x2c]         ; 005728fc
    FXCH                                ; 00572900
    FADD float ptr [ESP + 0x30]         ; 00572902
    FXCH ST2                            ; 00572906
    FADD float ptr [ESP + 0x34]         ; 00572908
    FXCH                                ; 0057290c
    FSTP float ptr [ESP + 0x68]         ; 0057290e
    FXCH                                ; 00572912
    FSTP float ptr [ESP + 0x6c]         ; 00572914
    PUSH ESI                            ; 00572918
    FSTP float ptr [ESP + 0x74]         ; 00572919
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 0057291d | float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 00572922
    FLD float ptr [ESP + 0x7c]          ; 00572926
    ADD ESP,0xc                         ; 0057292a
    FLDZ                                ; 0057292d
    FXCH                                ; 0057292f
    FST float ptr [ESP + 0x8]           ; 00572931
    FSTP double ptr [ESP]               ; 00572935
    FCOMP double ptr [ESP]              ; 00572938
    FNSTSW AX                           ; 0057293b
    SAHF                                ; 0057293d
    JA 0x0057294e                       ; 0057293e | LAB_0057294e
        ;   XREF to: 0057294e (CONDITIONAL_JUMP)
    FLD1                                ; 00572940
    FCOMP double ptr [ESP]              ; 00572942
    FNSTSW AX                           ; 00572945
    SAHF                                ; 00572947
    JNC 0x005729f2                      ; 00572948 | LAB_005729f2
        ;   XREF to: 005729f2 (CONDITIONAL_JUMP)
    LEA EDX,[ESP + 0x18]                ; 0057294e
        ;   Label: LAB_0057294e
    LEA EAX,[ESP + 0x60]                ; 00572952
    CMP EDX,EAX                         ; 00572956
    JZ 0x00572972                       ; 00572958 | LAB_00572972
        ;   XREF to: 00572972 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x60]      ; 0057295a
    MOV dword ptr [ESP + 0x18],EAX      ; 0057295e
    MOV EAX,dword ptr [ESP + 0x64]      ; 00572962
    MOV dword ptr [ESP + 0x1c],EAX      ; 00572966
    MOV EAX,dword ptr [ESP + 0x68]      ; 0057296a
    MOV dword ptr [ESP + 0x20],EAX      ; 0057296e
    FLD float ptr [ESP + 0x3c]          ; 00572972
        ;   Label: LAB_00572972
    FMUL float ptr [ESP + 0x78]         ; 00572976
    FLD float ptr [ESP + 0x40]          ; 0057297a
    FMUL float ptr [ESP + 0x78]         ; 0057297e
    FLD float ptr [ESP + 0x44]          ; 00572982
    FMUL float ptr [ESP + 0x78]         ; 00572986
    FLD float ptr [ESP + 0x30]          ; 0057298a
    FLD float ptr [ESP + 0x34]          ; 0057298e
    FLD float ptr [ESP + 0x38]          ; 00572992
    FLD float ptr [ESP + 0x74]          ; 00572996
    INC EBX                             ; 0057299a
    FADD float ptr [ESP + 0x78]         ; 0057299b
    FXCH ST6                            ; 0057299f
    FSTP float ptr [ESP + 0x48]         ; 005729a1
    FXCH ST4                            ; 005729a5
    FSTP float ptr [ESP + 0x4c]         ; 005729a7
    FXCH ST2                            ; 005729ab
    FSTP float ptr [ESP + 0x50]         ; 005729ad
    FXCH ST3                            ; 005729b1
    FSTP float ptr [ESP + 0x74]         ; 005729b3
    FXCH ST2                            ; 005729b7
    FADD float ptr [ESP + 0x48]         ; 005729b9
    FXCH ST2                            ; 005729bd
    FADD float ptr [ESP + 0x4c]         ; 005729bf
    FXCH                                ; 005729c3
    FADD float ptr [ESP + 0x50]         ; 005729c5
    FXCH ST2                            ; 005729c9
    FSTP float ptr [ESP + 0x30]         ; 005729cb
    FSTP float ptr [ESP + 0x34]         ; 005729cf
    FSTP float ptr [ESP + 0x38]         ; 005729d3
    CMP EBX,0x64                        ; 005729d7
    JL 0x0057285d                       ; 005729da | LAB_0057285d
        ;   XREF to: 0057285d (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6c],0xbf800000 ; 005729e0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005729e8
    MOV ESP,EBP                         ; 005729ec
    POP EBP                             ; 005729ee
    POP ESI                             ; 005729ef
    POP EBX                             ; 005729f0
    RET                                 ; 005729f1
    FLD float ptr [ESP + 0x8]           ; 005729f2
        ;   Label: LAB_005729f2
    FMUL float ptr [0x0064625a]         ; 005729f6 | float g_RaycastStepSize
    FADD float ptr [ESP + 0x74]         ; 005729fc
    FSTP float ptr [ESP + 0x6c]         ; 00572a00
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00572a04
    MOV ESP,EBP                         ; 00572a08
    POP EBP                             ; 00572a0a
    POP ESI                             ; 00572a0b
    POP EBX                             ; 00572a0c
    RET                                 ; 00572a0d

