; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_activate_FUN_004c4200(CCrater *this_ptr,CVector3f *center_position,float radius)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; float            Stack[0xc]:4   radius
; Local Variables:
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createCrater_FUN_004c8ea0 at 004c8ebe
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_fire.cpp_CCrater_render_FUN_004c4620
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4200
        ;   Label: core_fire.cpp_CCrater_activate_FUN_004c4200
    PUSH ESI                            ; 004c4201
    PUSH EDI                            ; 004c4202
    PUSH EBP                            ; 004c4203
    SUB ESP,0x68                        ; 004c4204
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004c4207
    MOV EBX,dword ptr [ESP + 0x80]      ; 004c420b
    LEA EAX,[ESI + 0xc]                 ; 004c4212
    CMP EAX,EBX                         ; 004c4215
    JZ 0x004c4229                       ; 004c4217
        ;   XREF to: 004c4229 (CONDITIONAL_JUMP)  ; LAB_004c4229
    MOV EDX,dword ptr [EBX]             ; 004c4219
    MOV dword ptr [EAX],EDX             ; 004c421b
    MOV EDX,dword ptr [EBX + 0x4]       ; 004c421d
    MOV dword ptr [EAX + 0x4],EDX       ; 004c4220
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c4223
    MOV dword ptr [EAX + 0x8],EDX       ; 004c4226
    PUSH ESI                            ; 004c4229
        ;   Label: LAB_004c4229
    CALL core_fire.cpp_CCrater_render_FUN_004c4620 ; 004c422a
        ;   XREF to: 004c4620 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004c4620(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004c422f
    LEA EAX,[ESI + 0xc]                 ; 004c4232
    PUSH 0x0                            ; 004c4235
    MOV dword ptr [ESI],0x1             ; 004c4237
    PUSH EAX                            ; 004c423d
    MOV EDX,dword ptr [0x006810c8]      ; 004c423e | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x4],0x0       ; 004c4244
    PUSH EDX                            ; 004c424b | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x8],0x3dcccccd ; 004c424c
    MOV EBX,ESI                         ; 004c4253
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004c4255
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x70],EAX      ; 004c425a
    LEA EDI,[ESI + 0x24]                ; 004c425e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004c4261
    MOV dword ptr [ESI + 0x10],EAX      ; 004c4265
    ADD ESP,0xc                         ; 004c4268
    PUSH dword ptr [ESP + 0x84]         ; 004c426b
        ;   Label: LAB_004c426b
    FLD float ptr [ESP + 0x88]          ; 004c4272
    FCHS                                ; 004c4279
    FSTP float ptr [ESP + 0x64]         ; 004c427b
    PUSH dword ptr [ESP + 0x64]         ; 004c427f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4283
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)

