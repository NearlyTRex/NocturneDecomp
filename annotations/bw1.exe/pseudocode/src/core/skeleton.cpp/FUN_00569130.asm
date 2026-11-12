; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00569130(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[61]:
;   core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00412600 at 00412629
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0 at 0041242b
;   core_batman.cpp_CBatman_getTargetPoints_FUN_004141c0 at 004141e6
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 00413feb
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412fa1
;   core_beast.cpp_CBeast_getTargetPoints_FUN_00414880 at 0041489e
;   core_biggs.cpp_CBiggs_getTargetPoints_FUN_00415070 at 0041508e
;   core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_0041d3b0 at 0041d3ec
;   core_bride.cpp_CBride_getTargetPoints_FUN_00424d60 at 00424d98
;   core_bride.cpp_CBride_processDamage_FUN_00424b10 at 00424b5a
;   ... and 51 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00569130
        ;   Label: core_skeleton.cpp_FUN_00569130
    SUB ESP,0xc                         ; 00569131
    MOV EDX,ESI                         ; 00569134
    MOV ECX,dword ptr [ESP + 0x18]      ; 00569136
    LEA EAX,[ECX*0x4 + 0x0]             ; 0056913a
    SUB EAX,ECX                         ; 00569141
    MOV ECX,dword ptr [ESP + 0x14]      ; 00569143
    SHL EAX,0x4                         ; 00569147
    ADD ECX,EAX                         ; 0056914a
    MOV EAX,dword ptr [ECX + 0xe8c]     ; 0056914c
    MOV dword ptr [ESP],EAX             ; 00569152
    MOV EAX,dword ptr [ECX + 0xe9c]     ; 00569155
    MOV EDI,ESI                         ; 0056915b
    MOV dword ptr [ESP + 0x4],EAX       ; 0056915d
    MOV EAX,dword ptr [ECX + 0xeac]     ; 00569161
    MOV ESI,ESP                         ; 00569167
    MOV dword ptr [ESP + 0x8],EAX       ; 00569169
    MOVSD ES:EDI,ESI                    ; 0056916d
    MOVSD ES:EDI,ESI                    ; 0056916e
    MOVSD ES:EDI,ESI                    ; 0056916f
    MOV EAX,EDX                         ; 00569170
    ADD ESP,0xc                         ; 00569172
    POP EDI                             ; 00569175
    RET                                 ; 00569176

