; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl crt_string_c_strtod_FUN_005ff0f3(char *str)
;
; Parameters:
; char *           Stack[0x8]:4   str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[13]:
;   core_cloth.cpp_FUN_0043c430 at 0043c589
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580da3
;   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 at 0045eb48
;   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 at 00465870
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 004655c0
;   shape_design.c_createKeyframeModel_FUN_00468320 at 004684a5
;   shape_design.c_generateGlobe_FUN_00468910 at 004689f4
;   shape_design.c_generateOctant_FUN_00469420 at 00469504
;   shape_design.c_generateShell_FUN_00468f20 at 00469004
;   shape_design.c_scaleModel_FUN_00467e70 at 00467eb5
;   ... and 3 more
;
; Called Functions:
;   crt_string.c_strtod_main_FUN_00605d5d
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ff0f3
        ;   Label: crt_string.c_strtod_FUN_005ff0f3
    MOV EBP,ESP                         ; 005ff0f4
    SUB ESP,0x10                        ; 005ff0f6
    PUSH 0x0                            ; 005ff0f9
    MOV EDX,dword ptr [EBP + 0x8]       ; 005ff0fb
    PUSH EDX                            ; 005ff0fe
    CALL crt_string.c_strtod_main_FUN_00605d5d ; 005ff0ff
        ;   XREF to: 00605d5d (UNCONDITIONAL_CALL)  ; double crt_string.c_strtod_main_FUN_00605d5d(char * str, char * * endptr)
    MOV dword ptr [EBP + -0x10],EAX     ; 005ff104
    MOV dword ptr [EBP + -0xc],EDX      ; 005ff107
    ADD ESP,0x8                         ; 005ff10a
    MOV EAX,dword ptr [EBP + -0x10]     ; 005ff10d
    MOV dword ptr [EBP + -0x8],EAX      ; 005ff110
    MOV EAX,dword ptr [EBP + -0xc]      ; 005ff113
    MOV dword ptr [EBP + -0x4],EAX      ; 005ff116
    MOV EAX,dword ptr [EBP + -0x8]      ; 005ff119
    MOV EDX,dword ptr [EBP + -0x4]      ; 005ff11c
    MOV ESP,EBP                         ; 005ff11f
    POP EBP                             ; 005ff121
    RET                                 ; 005ff122

